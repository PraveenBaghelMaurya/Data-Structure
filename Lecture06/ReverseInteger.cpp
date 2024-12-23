#include <iostream>
using namespace std;
int main()
{
    int inp, digit, ans = 0;
    cout << "Enter a number";
    cin >> inp;

    while (inp != 0)
    {
        digit = inp % 10;
        inp = inp / 10;
        ans = (ans * 10) + digit;
    }
    cout << endl
         << "Input in back\t:" << ans;
}