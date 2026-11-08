#include<iostream>
#include<string>
using namespace std;
int main()
{
    //单行输入getline
    char buf[1024]{0};
    cin.getline(buf,sizeof(buf)-1);
    cout<<buf<<endl;

    string line;
    getline(cin,line);
    cout<<line<<endl;

    //单个字符输入get
    char c=cin.get();
    cout<<c<<flush;


    while(1)
    {
        string line;
        int x{0};
        cout<<"请输入数字:"<<flush;
        cin>>x;
        //if(cin.rdstate()==ios_base::failbit)

        if(cin.fail())
        {
            cin.clear();//恢复状态为正常
            getline(cin,line);
            cout<<"cin fail:"<<line<<endl;
            continue;
        }
        cout<<x<<endl;
    }
}