#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string testfile="testfile.txt";
    //out 写入文件
    //binary 二进制处理 \r\n不处理

    //输出默认清空原内容
    fstream wfs(testfile,ios::out|ios::binary);
    //wfs.open(testfile,ios::out|ios::binary);

    wfs<<"1234567890\n";
    wfs.close();

    //app追加写入
    ofstream ofs;
    ofs.open(testfile,ios::app|ios::binary);
    ofs<<"ABCDEFGHIJ\n"<<flush;
    ofs.write("1234",4);
    ofs.close();


    //读取文件
    fstream rfs(testfile,ios::in|ios::binary);
    if(!rfs.is_open())
    {
        cerr<<"open file"<<testfile<<"failer!"<<endl;
        return -1;
    }
    char buf[4090]{0};
    rfs.read(buf,sizeof(buf)-1);
    cout<<"rfs.gcount()= "<<rfs.gcount()<<endl;
    cout<<"----------"<<endl;
    cout<<buf<<endl;
    cout<<"----------"<<endl;
    rfs.close();


    //获取文件大小  ios::ate 移到文件尾部
    //tellg读取文件指针位置
    ifstream ifs(testfile,ios::binary|ios::ate);
    cout<<testfile<<" testfile="<<ifs.tellg()<<endl;


    //读取文件更改后内容
    string line;
    while(1)
    {
        getline(ifs,line);
        //cout<<ifs.rdstate()<<endl;
        if(!line.empty())
        {
            cout<<"line: "<<line<<endl;
        }
        ifs.clear();
    }
}