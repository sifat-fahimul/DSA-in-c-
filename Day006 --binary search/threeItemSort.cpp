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
    //[0, 1, 1, 1, 0, 1, 2, 1, 0, 2]
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
    cout << "first for loop ended.";
    printArray(arr, 10);

    //[0, 0, 0, 1, 1, 1, 2, 1, 1, 2]

    for (int i = j; i < n; i++)
    {
        if (arr[i] == 1)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
}
int main()
{
    int arr[10] = {0, 1, 1, 1, 0, 1, 2, 1, 0, 2};
    sortArray(arr, 10);
    printArray(arr, 10);
    cout << "hello : ";
}