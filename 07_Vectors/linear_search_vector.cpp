#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int key, n, i;
    int found = 0;
    int vecIndex;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements in the vector:\n";
    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (vec[i] == key)
        {
            found = 1;
            vecIndex = i;
            break;
        }
    }
    if (found == 1)
    {
        cout << "Element found at index " << vecIndex;
    }
    else
    {
        cout << "Element not found.";
    }
    return 0;
}