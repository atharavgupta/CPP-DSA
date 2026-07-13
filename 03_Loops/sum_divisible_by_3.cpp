#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "The sum of numbers divisible by 3 from 1 to " << n << " is: " << sum ;
    return 0;
}