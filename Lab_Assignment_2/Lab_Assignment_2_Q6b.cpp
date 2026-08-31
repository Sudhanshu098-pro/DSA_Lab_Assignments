// (b) Addition of two matrices

#include<iostream>
using namespace std;

int main()
{
    int A[10][3] = {
        {3, 3, 3},
        {0, 0, 5},
        {1, 1, 8},
        {2, 2, 3}
    };

    int B[10][3] = {
        {3, 3, 3},
        {0, 0, 4},
        {1, 2, 6},
        {2, 2, 2}
    };

    int C[20][3];

    C[0][0] = 3;
    C[0][1] = 3;

    int i = 1, j = 1, k = 1;

    while(i <= A[0][2] && j <= B[0][2])
    {
        if(A[i][0] == B[j][0] &&
           A[i][1] == B[j][1])
        {
            int sum = A[i][2] + B[j][2];

            if(sum != 0)
            {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }

            i++;
            j++;
        }
        else if(A[i][0] < B[j][0] ||
               (A[i][0] == B[j][0] && A[i][1] < B[j][1]))
        {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];

            i++;
            k++;
        }
        else
        {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];

            j++;
            k++;
        }
    }

    while(i <= A[0][2])
    {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];

        i++;
        k++;
    }

    while(j <= B[0][2])
    {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];

        j++;
        k++;
    }

    C[0][2] = k - 1;

    cout << "Addition:" << endl;

    for(int x = 0; x < k; x++)
    {
        cout << C[x][0] << " "
             << C[x][1] << " "
             << C[x][2] << endl;
    }

    return 0;
}