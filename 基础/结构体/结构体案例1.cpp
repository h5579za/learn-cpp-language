#include<iostream>
#include<string>
using namespace std;
struct student 
{
    string sname;
    int score;
};
struct teacher 
{
    string tname;
    struct student sarr[5];
};
void allocateSpace(struct teacher tarr[], int n)
{
    //给老师赋值
    for(int i=0; i<n; i++)
    {
        cout << "Enter teacher name: ";
        cin >> tarr[i].tname;
        cout << "Enter student name and score: ";
        for(int j=0; j<5; j++)
        {
            cin >> tarr[i].sarr[j].sname >> tarr[i].sarr[j].score;
        }
    }
}
void printInfo(struct teacher tarr[], int n)
{
    //打印老师和学生信息
    for(int i=0; i<n; i++)
    {
        cout << "Teacher: " << tarr[i].tname << endl;
        for(int j=0; j<5; j++)
        {
            cout << "   Student: " << tarr[i].sarr[j].sname 
                 << ", Score: " << tarr[i].sarr[j].score << endl;
        }
    }
}
int main()
{
    struct teacher tarr[3];
    struct student sarr[5];
    int n=sizeof(tarr)/sizeof(tarr[0]);
    allocateSpace(tarr, n);
    printInfo(tarr, n);
    return 0;
}