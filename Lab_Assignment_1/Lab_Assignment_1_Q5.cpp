// Q5.Write a program to find sum of every row and every column in a two-dimensional array. 

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    int arr[100][100];

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << "Enter array elements:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Sum of every row
    cout << "\nSum of each row:\n";

    for(int i = 0; i < r; i++)
    {
        int sum = 0;

        for(int j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }

        cout << "Row " << i + 1 << " = " << sum << endl;
    }

    // Sum of every column
    cout << "\nSum of each column:\n";

    for(int j = 0; j < c; j++)
    {
        int sum = 0;

        for(int i = 0; i < r; i++)
        {
            sum = sum + arr[i][j];
        }

        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}