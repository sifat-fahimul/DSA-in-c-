
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << " enter first Number: ";
    cin >> a;
    cout << " enter second Number: ";
    cin >> b;

    char op;
    cout << " enter your operator .";
    cin >> op;
    switch (op)
    {

    case '+':
    {
        cout << (a + b) << endl;
        break;
    }
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        "enter valid operation.";
    }
    return 0;
}