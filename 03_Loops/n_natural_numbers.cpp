#include <iostream>
using namespace std;
int main()
{
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
    if (num < 0 || num == 0)
    {
        cout << "Enter natutral number only.";
    }
    return 0;
}