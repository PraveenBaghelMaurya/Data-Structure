// Total number of 1's in both bits

#include <iostream>
using namespace std;

int CountBit(int a, int b)
{
    int Total, aTotal = 0, bTotal = 0;
    while (a != 0)
    {
        if ((a & 1) == 1)
        {
            aTotal++;
        }
        a = a >> 1;
    }
    while (b != 0)
    {
        if ((b & 1) == 1)
        {
            bTotal++;
        }
        b = b >> 1;
    }
    Total = aTotal + bTotal;
    cout << "Total 1's are :\t" << Total;
    return Total;
}
int main()
{
    int num1, num2;
    cout << "Enter the two number: \t";
    cin >> num1 >> num2;
    int b = CountBit(num1, num2);
    cout << "Toatal Number of 1's are :\t" << b;
}