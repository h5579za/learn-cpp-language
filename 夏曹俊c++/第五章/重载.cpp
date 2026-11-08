#include<iostream>
using namespace std;


//参数默认值，从右边开始
void TestFuncDec(int x,int y=200,int z=300)
{
    cout<<x<<","<<y<<","<<z<<endl;
}


void Test(int p)
{
    cout<<"Test "<<p<<endl;
}


void TestOverload(int x)
{
    cout<<"int "<<x<<endl;
    Test(x);
}


void TestOverload(float x)
{
    //四舍五入
    if(x-(int)x>=0.5)
        x++;
    else
        x=(int)x;
    cout<<"float "<<x<<endl;
    Test(x); 
}


void TestOverload(double x,double y)
{
    cout<<"double "<<x<<" "<<y<<endl;
    Test(x+y);
}


int main()
{
    TestFuncDec(100);
    TestFuncDec(101,102);
    TestFuncDec(201,202,203);
    TestOverload(100);
    TestOverload(1.23f);
    TestOverload(1.5,2.5);
}