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
    while (left <= right)
    {
        while (arr[left] == 0 && left <= right)
        {
            left++;
        }
        while (arr[right] == 1 && left <= right)
        {
            right--;
        }

        swap(arr[right], arr[left]);
        left++;
        right--;
    }
}
int main()
{
    int arr[8] = {0, 1, 0, 1, 0, 1, 1, 0};
    // int t[3] = {1, 2, 3};
    sortArray(arr, 8);
    printArray(arr, 8);
}