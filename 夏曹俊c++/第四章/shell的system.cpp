#include<iostream>
using namespace std;
int main()
{
    system("pwd");
    system("date");
    system("ls -l");
    string cmd;
    //while(1)
    {
        cout<<">>";
        //cin>>cmd;
        getline(cin,cmd);//防止空格隔开的命令
        cout<<cmd<<endl;
        //cout<<"in_avail:"<<cin.rdbuf()->in_avail()<<endl;
        system(cmd.c_str());
    }
}