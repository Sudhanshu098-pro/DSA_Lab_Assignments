//(a) Transpose of a matrix.
#include<iostream>
using namespace std;

int main()
{
    int sparse[10][3] = {
        {3, 3, 3},
        {0, 2, 5},
        {1, 1, 8},
        {2, 0, 3}
    };

    int transpose[10][3];

    // Metadata
    transpose[0][0] = sparse[0][1];
    transpose[0][1] = sparse[0][0];
    transpose[0][2] = sparse[0][2];

    int k = 1;

    for(int col = 0; col < sparse[0][1]; col++)
    {
        for(int i = 1; i <= sparse[0][2]; i++)
        {
            if(sparse[i][1] == col)
            {
                transpose[k][0] = sparse[i][1];
                transpose[k][1] = sparse[i][0];
                transpose[k][2] = sparse[i][2];
                k++;
            }
        }
    }

    cout << "Transpose:" << endl;

    for(int i = 0; i <= transpose[0][2]; i++)
    {
        cout << transpose[i][0] << " "
             << transpose[i][1] << " "
             << transpose[i][2] << endl;
    }

    return 0;
}