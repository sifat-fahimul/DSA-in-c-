#include <iostream>
#include <math.h>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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

    int arr[6] = {1, 3, 5, 7, 9, 10};
    int arr1[5] = {2, 4, 6, 8, 12};

    reverseArr(arr, 6);
    reverseArr(arr1, 5);

    printArr(arr, 6);
    printArr(arr1, 5);
}