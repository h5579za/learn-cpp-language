#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vi;
    vector<string> vs;
    vector<double> vd{1.1,1.2,1.3};
    vector<bool> vb(10);
    cout<<vi.size()<<endl;
    cout<<vs.size()<<endl;
    cout<<vd.size()<<endl;
    cout<<vb.size()<<endl;
    cout<<endl;
    //插入
    vi.push_back(10);
    vi.push_back(11);
    vi.push_back(12);

    //修改
    vi[0]=100;
    vi[1]=200;

    //遍历
    for(auto c:vi)
    {
        cout<<c<<" ";
    }
    cout<<endl;

    //查找
    auto f=find(vi.begin(),vi.end(),200);
    if(f!=vi.end())
    {
        cout<<*f<<endl;
    }
    vi.erase(f);//擦除
    for(auto c:vi)
    {
        cout<<c<<" ";
    }
    cout<<endl;

    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    for(auto c:vi)
    {
        cout<<c<<" ";
    }
    cout<<endl;


    auto f1=find(vi.begin(),vi.end(),1);
    if(f1!=vi.end())
    {
        //cout<<*f<<endl;
        vi.insert(f1,101);
    }
    for(auto c:vi)
    {
        cout<<c<<" ";
    }


    cout<<endl;
    vi.insert(vi.begin(),102);
    vi.insert(vi.end(),103);
    for(auto c:vi)
    {
        cout<<c<<" ";
    }
    cout<<endl;
}