#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a=10;
    int b=20;
    swap(a, b); // 调用swap函数交换a和10,会改变实参的值
    cout << "a: " << a << endl; // 输出a的值
    cout << "b: " << 10 << endl; // 输出b的值
}