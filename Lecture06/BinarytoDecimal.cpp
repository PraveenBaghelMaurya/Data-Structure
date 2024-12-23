#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int inp, answer = 0, i = 0;
    cout << "Enter a number: \t";
    cin >> inp;

    while (inp != 0)
    {
        int digit = inp % 10;
        if (digit == 1)
        {
            answer = answer + pow(2, i);
        }
        inp /= 10;
        i++;
    }
    cout << endl
         << "answer is: \t" << answer;
}