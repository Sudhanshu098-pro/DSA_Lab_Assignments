//(e) Symmetric Matrix

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n*(n+1)/2];

    cout << "Enter lower triangular elements:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> arr[i*(i+1)/2 + j];
        }
    }

    cout << "Symmetric Matrix:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i >= j)
                cout << arr[i*(i+1)/2 + j] << " ";
            else
                cout << arr[j*(j+1)/2 + i] << " ";
        }
        cout << endl;
    }

    return 0;
}