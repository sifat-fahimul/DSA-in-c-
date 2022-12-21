#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int col = 1;
        while (col <= n - row + 1)
        {
            cout << " " << col << " ";
            col++;
        }

        int col2 = 1;
        while (col2 < row)
        {
            cout << " "
                 << "*"
                 << " ";
            col2++;
        }

        // // reverse try

        int col3 = 1;
        while (col3 < row)
        {
            cout << " "
                 << "*"
                 << " ";
            col3++;
        }

        int j = 1; // 4
        while (j <= n - row + 1)
        {
            cout << " " << n - row + 1 - j + 1 << " ";
            j++;
        }

        cout << endl;
        row++;
    }

    return 0;
}