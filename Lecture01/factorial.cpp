#include <iostream>
using namespace std;
int main()
{
    int number, result = 1;
    cout << "Enter a number : ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        result = i * result;
    }
    cout << "foctorial of " << number << " is this : " << result;
}
