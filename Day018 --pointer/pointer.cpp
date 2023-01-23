#include <iostream>
using namespace std;

int main()
{
    cout << "hello " << endl;
    int num = 5;
    cout << num << endl;

    // address of operator
    cout << "address of num : " << &num << endl;
    // pointer
    int *p = &num;

    cout << "Address pointer : " << p << endl;
    cout << "Value pointer : " << *p << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address pointer : " << p2 << endl;
    cout << "Value pointer : " << *p2 << endl;

    cout << "size of integer " << sizeof(num) << endl;
    cout << "size of pointer " << sizeof(p) << endl;
    int i = 6;
    int *ptr = 0;
    ptr = &i;

    cout << "Value pointer " << *ptr << endl;
    cout << "Address pointer " << ptr << endl;

    int n = 4;
    int a = n;
    a++;
    cout << n << endl;

    int *ptr1 = &n;
    cout << "Before " << n << endl;
    (*ptr1)++;
    cout << "Before " << n << endl;
}