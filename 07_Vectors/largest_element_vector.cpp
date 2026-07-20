#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int largest, n, i;
    int largestIndex;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements in the vector:\n";
    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    largest = vec[0];
    for (i = 0; i < n; i++)
    {
        if (vec[i] > largest)
        {
            largest = vec[i];
            largestIndex = i;
        }
    }
    cout << "Largest element is " << largest << " at index " << largestIndex;
    return 0;
}