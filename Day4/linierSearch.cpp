#include <iostream>
#include <math.h>
using namespace std;

int linierSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {10, -2, 13, 4, 5, 7, 10, 1, 8, 3};

    cout << "enter your Search key : " << endl;
    int key;
    cin >> key;

    int res = linierSearch(arr, 10, key);
    if (res)
    {
        cout << "element is present." << endl;
    }
    else
    {
        cout << "element is absent." << endl;
    }
}
