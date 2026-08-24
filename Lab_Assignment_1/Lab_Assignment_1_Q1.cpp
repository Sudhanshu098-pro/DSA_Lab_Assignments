// LAB ASSIGNMENT 1 

// 1) Develop a Menu driven program to demonstrate the following operations of Arrays
//  ——MENU——- 1. CREATE 2. DISPLAY 3. INSERT 4. DELETE 5. LINEAR SEARCH 6. EXIT

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n\n===== MENU =====\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            // CREATE
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter elements:\n";
                for(int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }

                cout << "Array created successfully.\n";
                break;


            // DISPLAY
            case 2:
                if(n == 0)
                {
                    cout << "Array is empty.\n";
                }
                else
                {
                    cout << "Array: ";

                    for(int i = 0; i < n; i++)
                    {
                        cout << arr[i] << " ";
                    }

                    cout << endl;
                }
                break;


            // INSERT
            case 3:
            {
                int pos, value;

                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter value: ";
                cin >> value;

                if(pos < 0 || pos > n)
                {
                    cout << "Invalid position.\n";
                }
                else
                {
                    // Shift elements to the right
                    for(int i = n; i > pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[pos] = value;
                    n++;

                    cout << "Element inserted successfully.\n";
                }

                break;
            }


            // DELETE
            case 4:
            {
                int pos;

                cout << "Enter position to delete: ";
                cin >> pos;

                if(pos < 0 || pos >= n)
                {
                    cout << "Invalid position.\n";
                }
                else
                {
                    // Shift elements to the left
                    for(int i = pos; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;

                    cout << "Element deleted successfully.\n";
                }

                break;
            }


            // LINEAR SEARCH
            case 5:
            {
                int x;
                bool found = false;

                cout << "Enter element to search: ";
                cin >> x;

                for(int i = 0; i < n; i++)
                {
                    if(arr[i] == x)
                    {
                        cout << "Element found at position " << i << endl;
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Element not found.\n";
                }

                break;
            }


            // EXIT
            case 6:
                cout << "Program exited.\n";
                break;


            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 6);

    return 0;
}


// Q2.