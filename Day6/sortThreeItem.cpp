#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int n)
{
    int left = 0, right = n - 1;
    // int mid = left + (right - left) / 2;

    while (left <= right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        if (arr[left] > 0)
        {
            swap(arr[left], arr[left + 1]);
        }
        // while (arr[left] != 0)
        // {
        //     swap(arr[left], arr[left + 1]);
        // }
    }

    // while (left <= right)
    // {

    //     while (arr[left] == 0 && left <= mid >= right)
    //     {
    //         left++;
    //     }
    //     while (arr[mid] == 1 && left <= mid >= right)
    //     {
    //         // mid++;
    //     }

    //     while (arr[right] == 2 && left <= mid >= right)
    //     {
    //         right--;
    //     }
    //     if (arr[left] == 0 && arr[right] == 0)
    //     {
    //         swap(arr[right], arr[left]);
    //         left++;
    //         right--;
    //     }
    // }
}
int main()
{
    int arr[10] = {0, 1, 0, 1, 0, 1, 2, 1, 0, 2};
    // sortArray(arr, 10);
    printArray(arr, 10);
}