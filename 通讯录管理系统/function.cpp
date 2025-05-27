#include "head.h"


//联系人结构体
struct person 
{
    string name;
    char sex; 
    int age;
    int tel;
    string place;
};


//通讯录结构体
struct addressBook 
{
    person personArray[MAX]; // 假设最多存储1000个联系人
    int size; // 当前联系人数量
};



//开始菜单
void ShowMenu()
{
    cout << "欢迎使用通讯录管理系统" << endl;
    cout << "1. 插入数据" << endl;
    cout << "2. 删除数据" << endl;
    cout << "3. 修改数据" << endl;
    cout << "4. 查找数据" << endl;
    cout << "5. 显示数据" << endl;
    cout << "6. 清空通讯录" << endl;
    cout << "7. 退出系统" << endl;
    cout << "请输入您的选择: ";
}


// 插入联系人
void Insert(addressBook *book)
{
    if(book->size >= MAX) 
    {
        cout << "通讯录已满，无法插入新联系人" << endl;
        return;
    }
    else
    {
        cout <<"输入姓名" << endl;
        struct person p1;
        cin >> p1.name;
        book->personArray[book->size].name = p1.name; // 将姓名存入通讯录
        int sex=0;


        while(1)// 循环直到用户输入有效的性别
        {
            cout << "输入性别（男=1/女=2）" << endl;// 提示用户输入性别
            cin >> sex;
            if(sex == 1 || sex == 2) 
            {
                book->personArray[book->size].sex = sex; // 将新联系人添加到通讯录中
                break; // 成功插入后跳出循环
            }
            cout << "性别输入错误，请输入 '1' 或 '2'" << endl;
        }
        
        
        cout << "输入年龄" << endl;
        cin >> p1.age;
        book->personArray[book->size].age = p1.age; // 将年龄存入通讯录
        
        
        cout << "输入电话" << endl;
        cin >> p1.tel;
        book->personArray[book->size].tel = p1.tel; // 将电话存入通讯录
        
        
        cout << "输入地址" << endl;
        cin >> p1.place;
        
        
        book->personArray[book->size].place = p1.place; // 将地址存入通讯录
        book->size++; // 更新联系人数量
        system("clear"); // 清屏
        cout << "联系人 " << p1.name << " 已插入" << endl; 
    }
}



//判断联系人是否存在
bool Exists(addressBook *book, string name)
{
    for(int i = 0; i < book->size; i++) 
    {
        if(book->personArray[i].name == name) 
        {
            return true; // 找到联系人
        }
    }
    return false; // 未找到联系人
}

// 查找联系人
void Search(addressBook *book)
{
    if(book->size == 0) 
    {
        system("clear"); // 清屏
        cout << "通讯录为空，无法查找联系人" << endl;
        return;
    }


    string name;
    cout << "请输入要查找的联系人姓名: ";
    cin >> name;
    Exists(book, book->personArray[0].name); // 检查是否存在联系人
    if(Exists(book, name) == false) 
    {
        system("clear"); // 清屏
        cout << "未找到联系人 " << name << endl;
        return; // 联系人不存在，直接返回
    }
    else
    {
        for(int i = 0; i < book->size; i++) 
        {
            if(book->personArray[i].name == name) 
            {
                system("clear"); // 清屏
                cout << "找到联系人，其信息如下" << name << endl;
                Print(book, i); // 打印找到的联系人的信息
                return; // 找到联系人后直接返回
            }
        }
    }
}

// 删除联系人
void Delete(addressBook *book)
{
    if(book->size == 0) 
    {
        system("clear"); // 清屏
        cout << "通讯录为空，无法删除联系人" << endl;
        return;
    }
    
    string name;
    cout << "请输入要删除的联系人姓名: ";
    cin >> name;
    Exists(book, book->personArray[0].name); // 检查是否存在联系人
    
    if(Exists(book, name)== false) 
    {
        system("clear"); // 清屏
        cout << "未找到联系人 " << name << endl;
        return; // 联系人不存在，直接返回
    }

    for(int i = 0; i < book->size; i++) 
    {
        if(book->personArray[i].name == name) 
        {
            // 找到联系人，进行删除
            for(int j = i; j < book->size - 1; j++) 
            {
                // 将后面的联系人前移，覆盖掉前面的
                book->personArray[j] = book->personArray[j + 1];
            }
            book->size--; // 更新联系人数量
            system("clear"); // 清屏
            cout << "联系人 " << name << " 已删除" << endl;
            return;
        }
    }    
}

void Print(addressBook *book, int i)
{
    cout << "姓名: " << book->personArray[i].name << "\t";
    cout << "性别: " << (book->personArray[i].sex == 1 ? "男":"女")<< "\t";
    cout << "年龄: " << book->personArray[i].age << "\t";
    cout << "电话: " << book->personArray[i].tel << "\t";
    cout << "地址: " << book->personArray[i].place << endl;
}

//显示所有联系人
void Show(addressBook *book)
{
    if(book->size==0)
    {
        cout << "通讯录为空，无法查找联系人" << endl;
        return;
    }
    else
    {
        for(int i=0;i<book->size;i++)
        {
            Print(book, i); // 打印每个联系人的信息
        }
    }
}

void Modify(addressBook *book)
{
    if(book->size == 0) 
    {
        system("clear"); // 清屏
        cout << "通讯录为空，无法修改联系人" << endl;
        return;
    }

    string name;
    cout << "请输入要修改的联系人姓名: ";
    cin >> name;
    Exists(book, book->personArray[0].name); // 检查是否存在联系人
    if(Exists(book, name) == false) 
    {
        system("clear"); // 清屏
        cout << "未找到联系人 " << name << endl;
        return; // 联系人不存在，直接返回
    }
    else
    {
        for(int i = 0; i < book->size; i++) 
        {
            if(book->personArray[i].name == name) 
            {
                system("clear"); // 清屏
                string newName,newPlace;
                int newSex,newAge,newTel;

                cout << "输入新的姓名: ";
                cin >> newName; // 输入新的姓名
                book->personArray[i].name = newName; // 修改姓名

                cout << "输入新的性别（男=1/女=2）: ";
                cin >> newSex; // 输入新的性别
                book->personArray[i].sex = newSex; // 修改性别

                cout << "输入新的年龄: ";
                cin >> newAge; // 输入新的年龄
                book->personArray[i].age = newAge; // 修改年龄

                cout << "输入新的电话: ";
                cin >> newTel; // 输入新的电话
                book->personArray[i].tel = newTel; // 修改电话

                cout << "输入新的地址: ";
                cin >> newPlace; // 输入新的地址
                book->personArray[i].place = newPlace; // 修改地址
                cout << "联系人 " << name << " 的信息已修改" << endl;
            }
        }
    }
}

// 清空通讯录
void Clean(addressBook *book)
{
    book->size = 0; // 将联系人数量重置为0
    cout << "通讯录已清空" << endl;
}