#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1={"test string 001"};
    cout<<str1<<endl;
    str1="test stting 002 00000001";
    cout<<str1<<endl;

    string str2{str1};
    cout<<str2<<endl;

    string str3;//默认空字符串
    cout<<str3<<endl;


    //字符串长度获取
    string str4="123456789";
    cout<<str4.size()<<endl;//size()不包括/0
    string str5="一二三四五";//中文gbk是10个字节，utf-8是15个
    cout<<str5.size()<<endl;//size()不包括/0

    //字符串截取
    cout<<str4.substr(1,5)<<endl;//第一个数开始往后五个数

    //字符串判断
    string strif;
    if(strif.empty())
    {
        cout<<"empty"<<endl;
    }


    //字符串和数字转换，出错抛异常
    auto i1=stoi("1234");
    cout<<i1<<endl;
    cout<<stod("123.5")<<endl;//字符串转double
    cout<<stof("123.5f")<<endl;//转float

    //数字转化为字符串
    auto pi=to_string(3.1415);
    cout<<pi<<endl;


    //字符串拼接
    string log;
    string txt="login system";
    string user="xcj";
    int threadid=1023;
    log=user+":"+txt+":"+to_string(threadid);
    cout<<log<<endl;

    //查找和替换
    string strfind="test for find [user] login system";
    auto pos=strfind.find("[test]");//查找成功返回位置
    if(pos==string::npos)
    {
        cout<<"[test] not found"<<endl;
    }
    string keys{"[user]"};
    pos=strfind.find(keys);
    if(pos!=string::npos)
    {
        cout<<"find"<<keys<<":"<<pos<<endl;
        cout<<strfind.substr(pos)<<endl;

        //替换字符串，不更改原字符串
        //1.被替换的起始位置
        //2.要被替换的长度
        //3.要替换为的字符串
        auto rep=strfind.replace(pos,keys.size(),"root");
        cout<<rep<<endl;
    }
}