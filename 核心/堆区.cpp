#include<iostream>
using namespace std;

int *func() 
{
    int a = 10;
    int *p1 = &a; // p指向局部变量a的地址
    

    //不能返回局部变量的地址，因为局部变量在函数结束后会被销毁


    int *p2 = new int(30); // 动态分配内存，p2指向动态分配的内存地址
    return p2; // 返回局部变量的地址
}



int main()
{
    int *p=func();
    cout << "动态分配的内存地址: " << *p << endl;


    int *arr = new int[5]; // 动态分配内存，arr指向动态分配的内存地址
    for (int i = 0; i < 5; ++i) 
    {
        arr[i] = i + 1; // 初始化动态分配的数组
    }
    for (int i = 0; i < 5; ++i) 
    {
        cout << "arr[" << i << "] = " << arr[i] << endl; // 输出动态分配的数组内容
    }


    delete p; // 释放动态分配的内存
    delete[] arr; // 释放动态分配的数组内存
    p = nullptr; // 将指针置为nullptr，避免悬空指针
    //getchar(); // 等待用户输入
}