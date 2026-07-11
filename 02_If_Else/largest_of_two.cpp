#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if (a > b)
    {
        cout << a << " is larger number.";
    }
    else if (b > a)
    {
        cout << b << " is larger number.";
    }
    else
    {
        cout << "Both numbers are equal.";
    }
    return 0;
}