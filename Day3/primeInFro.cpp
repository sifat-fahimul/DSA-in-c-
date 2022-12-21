#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        std::cout << "the Number is not prime." << std::endl;
    }
    else
    {
        cout << "the Number is prime" << endl;
    }

    return 0;
}