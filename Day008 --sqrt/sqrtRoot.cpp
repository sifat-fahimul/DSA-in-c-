#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = 0;

    while (s <= e)
    {
        long long int sqrt = mid * mid;
        if (sqrt == n)
            return mid;
        if (sqrt < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = 0; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 37;
    int ans = sqrtInteger(n);
    cout << "ans is : " << morePrecision(n, 6, ans) << endl;
}