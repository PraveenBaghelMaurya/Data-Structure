// fabonacci

#include <iostream>
using namespace std;
int fabonacci(int num)
{
    int a = 0, b = 1, c;
    cout << a << ", " << b;
    for (int i = 0; i < num - 2; i++)
    {
        c = a + b;
        cout << ", " << c;
        a = b;
        b = c;
    }
    return 1;
}
int main()
{
    int number;
    cout << "Enter anumber:\t";
    cin >> number;
    fabonacci(number);
}