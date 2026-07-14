#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1, c;
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int num;
    cout << "Enter number of terms: ";
    cin >> num;
    cout << "Fibonacci series is: ";
    fibonacci(num);
    return 0;
}
