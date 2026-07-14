#include <iostream>
using namespace std;
int sumDigits(int a)
{
    int sum = 0, b;
    while (a > 0)
    {
        b = a % 10;
        a = a / 10;
        sum = sum + b;
    }
    return sum;
}
int main()
{
    int num, sum;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits of " << num << " is: " << sumDigits(num);
    return 0;
}