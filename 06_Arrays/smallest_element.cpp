#include <iostream>
using namespace std;
int main()
{
    int n, i, arr[100];
    int smallest;
    int smallest_index = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements in array: " << "\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    smallest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    cout << "Smallest element is " << smallest << " at the index " << smallest_index << " .";
    return 0;
}