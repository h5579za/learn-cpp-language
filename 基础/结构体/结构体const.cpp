#include<iostream>
using namespace std;
struct person 
{
    string name;
    int age;
    int height;
};
void printPerson(const person *p)
{
    //p->age = 30; // Error: cannot modify a const object
    cout << "Name: " << p->name << "age"<< p->age << "height" << p->height<<endl;
}
int main()
{
    person p1 = {"zhangsan", 20, 180};
    printPerson(&p1);
    return 0;
}