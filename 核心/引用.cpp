#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int &b = a; // b是a的引用
    b = 10; // 修改b的值也会修改a的值
    cout << "a: " << a << endl; // 输出a的值
    cout << "b: " << b << endl; // 输出b的值
}