#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, sum = 0, num;
    cout << "how many fabonacci number do you want to print ? : ";
    cin >> num;
    cout << a << ", ";
    for (int i = 0; i <= num - 2; i++)
    {
        a = b;
        b = sum;
        sum = a + b;
        cout << sum << ", ";
    }
}
