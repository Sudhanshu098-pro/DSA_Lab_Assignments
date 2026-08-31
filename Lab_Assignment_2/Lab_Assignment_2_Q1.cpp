#include<iostream>
using namespace std;

int main()
{  
    int arr[1000];
    int n;
    cout <<"Enter the Size Of Array"<<endl;
    cin >> n;
    int key;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<"\n";
    cout <<"enter the element u want to search in array"<< endl;
    cin>> key;
    int start= 0;
    int end = n-1;
    bool found = false;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        
        if(arr[mid]==key)
        {
            cout<<"Element found at index"<< mid <<endl;
            break;
        }
        else if (arr[mid]<key)
        start = mid +1;

        else
        end = mid -1;

    }
    if(!found)
    cout<<"element does not exist";
    return 0;
}