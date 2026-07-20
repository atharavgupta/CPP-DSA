#include <iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int productArray(int arr[], int n)
{
    int i, product = 1;
    for (i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int i, n, arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements in array: " << "\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of elements in the array is: " << sumArray(arr, n);
    cout << "\nProduct of elements in the array is: " << productArray(arr, n);
    return 0;
}