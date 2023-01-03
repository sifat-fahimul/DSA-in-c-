#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[7] = {1, 3, 5, 7, 9, 3, 10};

    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < 7; i++)
    {
        ans = ans ^ i;
    }

    cout << ans << " ans.";
}
