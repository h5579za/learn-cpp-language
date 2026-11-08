#include<iostream>
#include<string>
using namespace std;
int main()
{
    //有格式输出    stdout 1 
    cout<<100<<endl;
    cout<<oct<<100<<endl;
    cout<<100<<endl;//会导致后续都变为八进制
    cout<<hex<<100<<endl;
    cout<<100<<endl;
    cout<<dec<<100<<endl;
    cout<<endl;

    cout<<true<<":"<<false<<endl;
    cout<<boolalpha;
    cout<<true<<":"<<false<<endl;
    cout<<endl;

    auto x{10};
    cout<<x<<endl;  
    cout<<dec<<x<<endl;
    cout<<oct<<x<<endl;
    cout<<hex<<x<<endl;
    cout<<endl;

    //无格式输出
    cout.put('A').put('B');
    cout.put('C');
    cout.put(68)<<endl;
    cout.write("123",3)<<endl;

    string str("teststring");
    cout.write(str.c_str(),str.size())<<endl;

    cout<<flush;


    //cerr标准错误输出，无缓冲,stderr 2
    cerr<<"test cerr 001\n";
    cerr<<"TEST CERR 002\n";
}