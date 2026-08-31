//(c) Multiplication of two matrices

#include<iostream>
using namespace std;

int main()
{
    // Triplet representation of A
    // row, column, value
    int A[10][3] = {
        {2, 3, 3},
        {0, 0, 1},
        {0, 2, 2},
        {1, 1, 3}
    };

    // Triplet representation of B
    int B[10][3] = {
        {3, 2, 3},
        {0, 0, 1},
        {1, 1, 2},
        {2, 0, 3}
    };

    int C[20][3];

    // Result dimensions
    C[0][0] = A[0][0];
    C[0][1] = B[0][1];

    int k = 1;

    // Multiply
    for(int i = 0; i < A[0][0]; i++)
    {
        for(int j = 0; j < B[0][1]; j++)
        {
            int sum = 0;

            for(int x = 1; x <= A[0][2]; x++)
            {
                if(A[x][0] == i)
                {
                    for(int y = 1; y <= B[0][2]; y++)
                    {
                        if(B[y][1] == j &&
                           A[x][1] == B[y][0])
                        {
                            sum += A[x][2] * B[y][2];
                        }
                    }
                }
            }

            if(sum != 0)
            {
                C[k][0] = i;
                C[k][1] = j;
                C[k][2] = sum;
                k++;
            }
        }
    }

    C[0][2] = k - 1;

    cout << "Result in Triplet Form:" << endl;

    for(int i = 0; i < k; i++)
    {
        cout << C[i][0] << " "
             << C[i][1] << " "
             << C[i][2] << endl;
    }

    return 0;
}