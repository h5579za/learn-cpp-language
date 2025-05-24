#include<iostream>
using namespace std;
struct person 
{
    string name;
    int age;
    int height;
};
int main()
{
    person p1 = {"zhangsan", 20, 180};
    person * s = &p1;
    cout << "Name: " << s->name << endl;
    cout << "Age: " << s->age << endl;
    cout << "Height: " << s->height << endl;
}