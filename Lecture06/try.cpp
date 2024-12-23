#include <iostream>
using namespace std;
int main()
{
    int n, answer = 0;
    cout << "Enter a number: \t";
    cin >> n;
    while (n != 0)
    {
        int digit = n & 1;          // 101
        int bit = (~digit);         // 1=>0--
        answer = answer * 10 + bit; // 0*10+0=>0
        n = n >> 1;
    }
    cout << "The binary representation of the number is: \t" << answer;
}