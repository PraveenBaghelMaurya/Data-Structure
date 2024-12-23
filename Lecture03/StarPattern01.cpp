#include <iostream>
using namespace std;

int main()
{
    // --------Pattern 1 --------------
    // int i = 1, n = 5;
    // while (i <= n)//row
    // {
    //     int j = 1;
    //     while (j <= n)//col
    //     {
    //         cout << " * ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ----------Patter 2----------------
    int i = 1, n = 5;
    while (i <= n) // row
    {
        int j = 1;
        while (j <= n) // col
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}