#include <iostream>
#include <vector>
using namespace std;
void table(vector<int> &vec, int n)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        vec[i] = n * (i + 1);
    }
}
int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> vec(10);
    table(vec, n);
    cout << "The multiplication table of " << n << " is:\n";
    for (i = 0; i < 10; i++)
    {
        cout << n << " X " << i + 1 << " = " << vec[i] << "\n";
    }
    return 0;
}