#include<iostream>
using namespace std;
enum 枚举类型名
{
    枚举值1,
    枚举值2,
    枚举值3,
    枚举值4=1000,
    枚举值5,
    枚举值6,

};
enum Status
{
    play,
    pause,
    stop,
};
enum class LogLevel
{
    debug,
    info,
    error,
    fatal,
};
int main()
{
    LogLevel level{LogLevel::debug};
    cout<<(int)level<<endl;
    cout<<(int)LogLevel::fatal<<endl;
    level=LogLevel::fatal;
    if(LogLevel::fatal==level)
    {
        cout<<"fatal"<<endl;
    }
    LogLevel confLevel{LogLevel::info};
    if(level>=confLevel)
    {
        cout<<"log view"<<endl;
    }


    Status status{stop};
    if(status==stop)
    {
        status=play;
    }
    cout<<status<<endl;
    if(status==play)
    {
        cout<<"playing"<<endl;
    }

    
    枚举类型名 ev1{枚举值1};
    cout<<ev1<<endl;
    cout<<枚举值2<<endl;
    cout<<枚举值3<<endl;
    cout<<枚举值4<<endl;
    cout<<枚举值5<<endl;
    cout<<枚举值6<<endl;
}