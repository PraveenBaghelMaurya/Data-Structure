#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if (number > 0)
    {
        cout << "Number is Positive";
    }
    else if (number < 0)
    {
        cout << "Number is negative";
    }
    else if (number == 0)
    {
        cout << "Number is zero or Invalid";
    }
}