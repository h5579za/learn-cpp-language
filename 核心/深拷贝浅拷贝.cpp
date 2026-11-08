#include<iostream>
using namespace std;
class Person{
public:
    Person()
    {
        cout<<"无参构造函数"<<endl;

    }
    Person(int age,int height)
    {
        m_Age=age;
        m_Height=new int(height);
        cout<<"有参构造函数"<<endl;
    }



    //浅拷贝带来的问题就是堆区内存重复释放
    //要利用深拷贝来解决
    //自己实现拷贝构造函数，解决浅拷贝带来的问题    

    Person(const Person &p)
    {
        cout<<"拷贝构造函数调用"<<endl;
        m_Age=p.m_Age;
        //m_Height=p.m_Height;  编译器默认实现这行代码

        //深拷贝操作
        m_Height=new int(*p.m_Height);
    }




    ~Person()
    {
        //析构代码，将堆区开辟数据做释放处理
        if(m_Height!=NULL)
        {
            delete m_Height;
            m_Height=NULL;
        }
        cout<<"析构函数"<<endl;   
    }
    int m_Age;
    int *m_Height;
};

void test01(){
    Person p1(18,169);
    cout<<"p1的年龄 "<<p1.m_Age<<"身高为 "<<*p1.m_Height<<endl;

    Person p2(p1);//编译器提供了拷贝构造函数
    cout<<"p2的年龄 "<<p2.m_Age<<"身高为 "<<*p2.m_Height<<endl;

}

int main()
{
    test01();
}