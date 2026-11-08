#include<iostream>
using namespace std;
enum class LogLevel
{
    debug,
    info,
    error,
    fatal,
};
int main(int argc,char* argv[])
{
    auto loglevel=LogLevel::debug;
    if(argc>1)
    {
        string LevelStr=argv[1];//用户设置的日志级别
        if("info"==LevelStr)
            loglevel=LogLevel::info;
        else if("error"==LevelStr)
            loglevel=LogLevel::error;
        else if("fatal"==LevelStr)
            loglevel=LogLevel::fatal;
    }

    {
        LogLevel level=LogLevel::debug;
        string context="test log 1";
        if(level>=loglevel)
        {
            string LevelStr="debug";
            if(LogLevel::info==level)
                LevelStr="info";
            else if(LogLevel::error==level)
                LevelStr="error";
            else if(LogLevel::fatal==level)
                LevelStr="fatal";
            cout<<context<<endl;
        }
    }

    {
        LogLevel level=LogLevel::info;
        string context="test log 2";
        if(level>=loglevel)
        {
            string LevelStr="debug";
            if(LogLevel::info==level)
                LevelStr="info";
            else if(LogLevel::error==level)
                LevelStr="error";
            else if(LogLevel::fatal==level)
                LevelStr="fatal";
            cout<<context<<endl;
        }
    }


    {
        LogLevel level=LogLevel::error;
        string context="test log 3";
        if(level>=loglevel)
        {
            string LevelStr="debug";
            if(LogLevel::info==level)
                LevelStr="info";
            else if(LogLevel::error==level)
                LevelStr="error";
            else if(LogLevel::fatal==level)
                LevelStr="fatal";
            cout<<context<<endl;
        }
    }


    {
        LogLevel level=LogLevel::fatal;
        string context="test log 4";
        if(level>=loglevel)
        {
            string LevelStr="debug";
            if(LogLevel::info==level)
                LevelStr="info";
            else if(LogLevel::error==level)
                LevelStr="error";
            else if(LogLevel::fatal==level)
                LevelStr="fatal";
            cout<<context<<endl;
        }
    }
}