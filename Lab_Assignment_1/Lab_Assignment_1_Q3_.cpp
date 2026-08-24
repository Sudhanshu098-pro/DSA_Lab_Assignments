#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter K: ";
    cin >> k;

    // In case K is greater than n
    k = k % n;

    int temp[100];

    // LEFT ROTATION
    for(int i = 0; i < n; i++)
    {
        temp[i] = arr[(i + k) % n];
    }

    cout << "Left Rotation: ";
    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    cout << endl;

    // RIGHT ROTATION
    for(int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    cout << "Right Rotation: ";
    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}