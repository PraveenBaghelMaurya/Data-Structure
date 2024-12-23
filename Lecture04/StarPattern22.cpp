#include <iostream>
using namespace std;

int main()
{
    int i = 1, num = 4, count = 1;

    while (i <= num)
    {
        int j = 1;
        int space = num - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}