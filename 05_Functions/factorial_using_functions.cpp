#include <iostream>
using namespace std;
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Please enter a positive number.";
    }
    else
    {
        cout << "The factorial of " << num << " is: " << factorial(num);
    }
    return 0;
}