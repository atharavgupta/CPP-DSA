#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout << num << " is a postive number.";
    }
    else if (num < 0)
    {
        cout << num << " is a negative number.";
    }
    else
    {
        cout << "Entered number is zero.";
    }
    return 0;
}