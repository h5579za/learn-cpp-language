#include<iostream>
using namespace std;
int main()
{
    float c = 3e2f; //3*10^2
    float d = 3e-2f; //3*0.1^2
    float a = 3.1432535253253888f;
    double b = 3.14159265358979323846;
    cout << "float a = " << a << endl;
    cout << "double b = " << b << endl;
    cout << "float c = " << c << endl;
    cout << "float d = " << d << endl;
    printf("float a = %.8f\n", a);
    printf("double b = %.16f\n", b);
}