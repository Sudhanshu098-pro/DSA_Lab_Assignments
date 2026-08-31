//(b) Tri-diagonal Matrix.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[3*n - 2];

    cout << "Enter elements row-wise:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(abs(i-j) <= 1)
            {
                cin >> arr[3*i + j - 1];
            }
        }
    }

    cout << "Matrix:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(abs(i-j) <= 1)
                cout << arr[3*i + j - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
