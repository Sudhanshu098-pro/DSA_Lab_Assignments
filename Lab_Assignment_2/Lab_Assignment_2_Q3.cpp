// using linear search 
#include<iostream>
using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 5, 6};
//     int n = 6;

//     int expected = n * (n + 1) / 2;
//     int actual = 0;

//     for(int i = 0; i < n - 1; i++)
//     {
//         actual += arr[i];
//     }

//     cout << "Missing number = " << expected - actual;

//     return 0;
// }

// using binary search 

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;

    int start = 0;
    int end = n - 2;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == mid + 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Missing number = " << start + 1;

    return 0;
}