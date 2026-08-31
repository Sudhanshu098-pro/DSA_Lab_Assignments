// (d) Write a program to sort the strings in alphabetical order

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr[5];

    cout << "Enter 5 strings:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Strings in alphabetical order:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

//(e) Write a program to convert a character from uppercase to lowercase

int main()
{
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;

    cout << "Lowercase character: " << char(tolower(ch));

    return 0;
}