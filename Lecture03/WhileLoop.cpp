#include <iostream>
using namespace std;
int main()
{
    // -----------------------sum------------------------
    // int num = 10, i = 0, result = 0;
    // while (i <= num)
    // {
    //     result += i;
    //     i++;
    // }
    // cout << "sum is " << result;

    // --------------------sum of even------------------------

    // int num = 100, result = 0, i = 0;
    // while (i <= num)
    // {
    //     if (i % 2 == 0)
    //     {
    //         result += i;
    //     }
    //     i++;
    // }
    // cout << "sum of even : " << result;

    // ----------------------Prime Number------------------------
    int num, i = 2, count = 0;
    cout << "Enter a Number number\t";
    cin >> num;

    if (num <= 1)
    {
        cout << num << " is not Prime Number";
    }
    else
    {
        while (i <= (num / 2))
        {
            if (num % i == 0)
            {
                count++;
            }
            i++;
        }
        if (count == 0)
        {
            cout << num << " is Prime Number";
        }
        else
        {
            cout << num << " is not Prime Number";
        }
    }
}