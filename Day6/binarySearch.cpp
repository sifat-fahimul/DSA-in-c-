
#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {2, 4, 6, 8, 68, 76};

    int res = binarySearch(arr, 6, 2);

    cout << "result : " << res;
}