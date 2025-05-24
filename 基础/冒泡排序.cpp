#include<iostream>
using namespace std;
int main()
{
    int arr1[10]={4,5,2,9,1,3,7,8,0,6};
    cout << "排序前" <<endl;
    for(int i=0;i<10;i++)
    {
        cout << arr1[i] << " ";
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    cout << "排序后" <<endl;
    for(int i=0;i<10;i++)
    {
        cout << arr1[i] << " ";
    }
}