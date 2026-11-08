#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

#define LOGDEBUG(s) LogWrite(s)

//用户输入LOGDEBUG("test log 001")
//生成一条日志：2024-07-30 18：29：30
//debug:test log 001 main.cpp
//可以设置日志输出为控制台，string和文件中的

void LogWrite(string log)
{
    cout<<log<<endl;
}
int main()
{
    LOGDEBUG("test log 001");
    LOGDEBUG("test log 002");
}