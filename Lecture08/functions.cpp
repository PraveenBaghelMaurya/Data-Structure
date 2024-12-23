#include <iostream>
#include <math.h>
using namespace std;

int power()
{
    int a, b;
    cout << "Enter two number:\t";
    cin >> a >> b;
    int c = pow(a, b);
    cout << "Answer is :\t";
    return c;
}

int main()
{
    cout << power() << endl;
}