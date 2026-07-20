#include <iostream>
using namespace std;
int main()
{
    int i, n, key, found = 0;
    int arr[100];
    int index = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements in array: " << "\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search: ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            index = i;
            break;
        }
    }
    if (found == 1)
    {
        cout << "Element found at the index " << index << " .";
    }
    else
    {
        cout << "Element not found.";
    }
    return 0;
}