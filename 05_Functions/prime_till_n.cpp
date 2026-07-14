#include <iostream>
using namespace std;
// prime number till n
void prime(int n)
{
    int i, j, flag;
    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << "\n";
        }
    }
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The prime numbers till " << num << " are: " << "\n";
    prime(num);
    return 0;
}