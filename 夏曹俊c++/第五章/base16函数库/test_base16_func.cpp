#include<iostream>
#include<string>
#include<vector>
#include <cstring>
#include"base16.h"
using namespace std;
int main()
{
    const char* cstr{"测试const char*到vector"};
    int size=strlen(cstr);//不包含\0

    //1.数据开始的内存  2.数据最后内存的下一位
    // \0的下一位，所以要加一
    vector<unsigned char> data(cstr,cstr+size+1);
    cout<<data.size()<<endl;
    cout<<data.data()<<endl;

    char astr[]{"测试数组到vector"};
    data.clear();//清空vector

    data.assign(astr,&astr[sizeof(astr)]);
    cout<<data.size()<<endl;
    cout<<data.data()<<endl;

    string str{"测试string到vector"};
    data.clear();
    data.assign(str.begin(),str.end());
    cout<<data.size()<<endl;
    cout<<data.data()<<endl;

    string outstr(data.begin(),data.end());
    cout<<outstr<<endl;


    //base16编码
    {
        string teststr{"测试base16数据"};
        vector<unsigned char> data(teststr.begin(),teststr.end());
        data.push_back('\0');
        auto base16str=Base16Encode(data);
        cout<<"base16:"<<base16str<<endl;
        

        auto resdata=Base16Decode(base16str);
        cout<<resdata.data()<<endl;
    }
}