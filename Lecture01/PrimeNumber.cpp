#include <iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "Enter a number : ";
    cin >> number;
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << number << " is prime Number ";
    }
    else
    {
        cout << number << " is not Prime number ";
    }
}