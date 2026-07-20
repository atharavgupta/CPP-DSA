#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n, i, arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements in array: " << "\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nOriginal array: ";
    printArray(arr, n);
    reverseArray(arr, n);
    cout << "\nReversed array: ";
    printArray(arr, n);
    return 0;
}
