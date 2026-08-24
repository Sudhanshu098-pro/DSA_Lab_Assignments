// 4) Implement the logic to a. Reverse the elements of an array b. 
//Find the matrix multiplication c. Find the Transpose of a Matrix 

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== MENU =====\n";
    cout << "1. Reverse Array\n";
    cout << "2. Matrix Multiplication\n";
    cout << "3. Transpose of Matrix\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        // a. Reverse Array
        case 1:
        {
            int n;
            int arr[100];

            cout << "Enter size of array: ";
            cin >> n;

            cout << "Enter elements: ";
            for(int i = 0; i < n; i++)
                cin >> arr[i];

            int start = 0;
            int end = n - 1;

            while(start < end)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }

            cout << "Reversed array: ";
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";

            break;
        }

        // b. Matrix Multiplication
        case 2:
        {
            int r1, c1, r2, c2;

            cout << "Enter rows and columns of first matrix: ";
            cin >> r1 >> c1;

            cout << "Enter rows and columns of second matrix: ";
            cin >> r2 >> c2;

            if(c1 != r2)
            {
                cout << "Matrix multiplication is not possible.";
                break;
            }

            int A[100][100], B[100][100], C[100][100];

            cout << "Enter first matrix:\n";
            for(int i = 0; i < r1; i++)
                for(int j = 0; j < c1; j++)
                    cin >> A[i][j];

            cout << "Enter second matrix:\n";
            for(int i = 0; i < r2; i++)
                for(int j = 0; j < c2; j++)
                    cin >> B[i][j];

            for(int i = 0; i < r1; i++)
            {
                for(int j = 0; j < c2; j++)
                {
                    C[i][j] = 0;

                    for(int k = 0; k < c1; k++)
                    {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            cout << "Result:\n";
            for(int i = 0; i < r1; i++)
            {
                for(int j = 0; j < c2; j++)
                    cout << C[i][j] << " ";

                cout << endl;
            }

            break;
        }

        // c. Transpose
        case 3:
        {
            int r, c;
            int arr[100][100];

            cout << "Enter rows and columns: ";
            cin >> r >> c;

            cout << "Enter matrix:\n";

            for(int i = 0; i < r; i++)
                for(int j = 0; j < c; j++)
                    cin >> arr[i][j];

            cout << "Transpose:\n";

            for(int j = 0; j < c; j++)
            {
                for(int i = 0; i < r; i++)
                    cout << arr[i][j] << " ";

                cout << endl;
            }

            break;
        }

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
