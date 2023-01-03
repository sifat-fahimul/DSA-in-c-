#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int col = row;
        while (col <= n - 1)
        {
            cout << "   ";
            col++;
        }

        int col2 = 1;
        while (col2 <= row)
        {
            cout << " " << col2 << " ";
            col2++;
        }
        // reverse try

        int col3 = 1;
        while (col3 <= row - 1)
        {
            cout << " " << col3 << " ";
            col3++;
        }

        cout << endl;
        row++;
    }

    return 0;
}