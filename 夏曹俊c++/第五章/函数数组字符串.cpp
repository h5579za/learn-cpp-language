#include<iostream>
#include<vector>
#include<string>
using namespace std;
//返回数组只能是指针，数组参数全部变为指针
//数组经过参数传递，无法知道内存占用
int* TestArr(char arr[10],
                char str1[],
                const char* str2,
                int datas[],
                int data_size)
//int datas[]==int* datas
{
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(str1)<<endl;
    cout<<sizeof(str2)<<endl;//指针大小,x64是8字节
    cout<<sizeof(datas)<<endl;
    for(int i=0;i<data_size/sizeof(int);i++)
        datas[i]+=10;
    return datas;   
}



vector<int> TestVecStr(vector<char> arr,
                        string str1,
                        string str2,
                        vector<int> datas)
{
    cout<<arr.size()<<endl;
    cout<<str1.size()<<endl;//不包含\0
    cout<<str2.size()<<endl;
    cout<<datas.size()<<endl;
    for(auto& d:datas)
        d+=10000;
    return datas;
}



int main()
{
    char arr[10];
    char str1[]{"0123456789"};
    const char* str2{"ABCDEF"};
    int datas[]{0,1,2,3,4,5,6,7,8};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(str1)<<endl;
    cout<<sizeof(str2)<<endl;//指针大小,x64是8字节
    cout<<sizeof(datas)<<endl;

    for(auto d:datas)
        d+=100;//更改无效，d只是数组中元素的复制

    for(auto d:datas)
        cout<<d<<" ";
    cout<<endl;


    for(auto& d:datas)//引用可修改
        d+=1000;
        
    for(auto d:datas)
        cout<<d<<" ";
    cout<<endl;

    auto res=TestArr(arr,str1,str2,datas,sizeof(datas));
    for(auto& d:datas)
        cout<<d<<" ";
    cout<<endl<<endl;;

    {
        cout<<"vector string"<<endl;
        vector<char> arr(10);
        string str1{"0123456789"};
        const string str2{"ABCDEF"};
        vector<int> datas{0,1,2,3,4,5,6,7,8};


        for(auto& d:datas)//引用可修改
            d+=1000;

        for(auto d:datas)
            cout<<d<<" ";
        cout<<endl;


        auto res=TestVecStr(arr,str1,str2,datas);
        for(auto d:datas)
            cout<<d<<" ";
        cout<<endl;
        for(auto d:res)
            cout<<d<<" ";
        cout<<endl;
    }
}