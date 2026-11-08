#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    //stringstream基础用法
    {
        stringstream ss;
        ss<<"test stringstream:"<<100;
        ss<<true;
        cout<<ss.str()<<endl;
        cout<<endl;

        //转换
        ss<<boolalpha;
        ss<<hex;

        ss<<" "<<false<<100<<" ";
        cout<<ss.str()<<endl;

        //恢复
        ss<<noboolalpha;
        ss<<dec;

        ss<<" "<<false<<100;
        cout<<ss.str()<<endl;

        ss.str("");//清空
        cout<<ss.str()<<endl;

        cout<<"分割"<<endl;

    }

    //stringstream格式输入
    {
        string data="test1 test2 test3";
        stringstream ss(data);
        string tmp;
        ss>>tmp;cout<<tmp<<" ";
        ss>>tmp;cout<<tmp<<" ";
        ss>>tmp;cout<<tmp<<" ";
        cout<<endl;

        cout<<"分割"<<endl;
    }


    //stringstream单行读取
    {
        string data="test1 test2 test3\ntest4 test5 test6\ntest7 test8 test9";
        string line;
        stringstream ss(data);
        while(1)
        {
            getline(ss,line);
            cout<<"line:"<<line<<endl;
            if(ss.eof())break;
        }
    }   
}