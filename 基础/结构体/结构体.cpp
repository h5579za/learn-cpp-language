#include<iostream>
#include<string>
using namespace std;
struct person 
{
    string name;
    int age;
    int height;
};
int main()
{
    struct person p1;
    struct person p2;
    struct person p3;
    struct person stuArray[3]=
    {
        {"张三", 30, 175},
        {"李四", 28, 185},
        {"王五", 29, 165}
    };
    p1.name = "John";
    p1.age = 30;
    p1.height = 175;


    p2.name = "mike";
    p2.age = 28;
    p2.height = 185;


    p3.name = "alice";
    p3.age = 29;
    p3.height = 165;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << endl;

    cout << "Name: " << p2.name << endl;
    cout << "Age: " << p2.age << endl;
    cout << "Height: " << p2.height << endl;

    cout << "Name: " << p3.name << endl;
    cout << "Age: " << p3.age << endl;
    cout << "Height: " << p3.height << endl;

    for(int i=0;i<3;i++)
    {
        cout << stuArray[i].name << stuArray[i].age << stuArray[i].height << endl;
    }
    return 0;
}
