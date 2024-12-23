#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 4;
    while (i <= num)
    {
        int j = 1;
        int pattern = num - i + 1;
        while (j <= pattern)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;

        /* code */
    }
}