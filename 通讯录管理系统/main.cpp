#include "head.h"
#include "function.cpp"

int main()
{
    system("clear"); // 清屏
    struct addressBook book;
    book.size = 0; // 初始化联系人数量为0
    int choice;
    while(1)
    {
        ShowMenu();
        cin >> choice;
        if (choice == 1) 
        {
            Insert(&book);
        } 
        else if (choice == 2) 
        {
            Delete(&book);
        } 
        else if (choice == 3) 
        {
            Modify(&book);
        } 
        else if (choice == 4) 
        {
            Search(&book);
        } 
        else if (choice == 5) 
        {
            Show(&book);
        } 
        else if (choice == 6) 
        {
            system("clear"); // 清屏
            Clean(&book);
        }
        else if (choice == 7) 
        {
            system("clear"); // 清屏
            cout << "退出系统" << endl;
            break;
        } 
        else {
            cout << "无效的选择，请重新输入" << endl;
        }
    }
    
    return 0;
}

