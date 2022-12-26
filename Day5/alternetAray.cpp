
#include <iostream>
#include <math.h>
using namespace std;

void swapAlternate(int *arr, int size)
{
    // Write your code here
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {1, 3, 5, 7, 9, 10, 11};

    swapAlternate(arr, 7);
    printArr(arr, 7);
}
