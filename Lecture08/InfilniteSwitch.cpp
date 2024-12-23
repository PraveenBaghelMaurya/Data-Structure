#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number:\t";
    cin >> a;

    while (true)
    {
        switch (a)
        {
        case 1:
            cout << "You entered 1.\n";
            break;

        case 2:
            cout << "You entered 2.\n";
            break;

        default:
            cout << "You entered something else.\n";
            break;
        }
        break;
    }
}