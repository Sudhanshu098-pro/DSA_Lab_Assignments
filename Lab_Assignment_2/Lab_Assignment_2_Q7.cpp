#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 2, 4, 1};
    int n = 5;

    int count = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                count++;
            }
        }
    }

    cout << "Number of inversions = " << count;

    return 0;
}