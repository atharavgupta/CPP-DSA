#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> &vec, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}
void reverseVector(vector<int> &vec, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
int main()
{
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter the elements in the vector:\n";
    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    cout << "Original vector:\n";
    printVector(vec, n);
    reverseVector(vec, n);
    cout << "\n\nReversed vector:\n";
    printVector(vec, n);
    return 0;
}
