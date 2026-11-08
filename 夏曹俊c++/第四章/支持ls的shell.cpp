#include<iostream>
using namespace std;
int main()
{
    bool is_exit=false;
    string cmd;
    while(!is_exit)
    {
        cout<<"xshell>>";
        getline(cin,cmd);
        if(cmd=="ls")
        {
            system("ls");
        }
        else if(cmd=="exit")
        {
            break;
        }
        else if(cmd=="quit")
        {
            is_exit=true;
            continue;
        }
        else
        {
            cout<<"命令"<<cmd<<"不支持"<<endl;
        }
    }
}