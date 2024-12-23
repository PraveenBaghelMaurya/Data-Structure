#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:\t";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    default:
        cout << "Invalid number";
        break;
    }
}