#include<iostream>
using namespace std;

int c,d;

//const修饰的全局常量
const int g=10;
const int h=20;

int main()
{
    int a, b;
    static int e, f;
    const int i=30; // const修饰的局部常量
    system("clear");
    cout << "局部变量地址为: " << &a << endl;
    cout << "局部变量地址为: " << &b << endl;
    cout << "全局变量地址为: " << &c << endl;
    cout << "全局变量地址为: " << &d << endl;
    cout << "静态变量地址为: " << &e << endl;
    cout << "静态变量地址为: " << &f << endl;
    cout << "字符串常量地址为: " << &"helloworld" << endl;
    cout << "const全局常量地址为: " << &g << endl;
    cout << "const全局常量地址为: " << &h << endl;
    cout << "const局部常量地址为: " << &i << endl;
}