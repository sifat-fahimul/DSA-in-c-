#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int number = 0;
    int sum = 0;

    while (number <= n)
    {
        cout << number << endl;
        sum = sum + number;
        number = number + 2;
    }
    cout << "Total is : " << sum << endl;
}