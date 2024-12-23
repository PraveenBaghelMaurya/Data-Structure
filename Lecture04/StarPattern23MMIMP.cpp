#include <iostream>
using namespace std;

int main()
{
    int i = 1, num = 4;
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

            cout << j;
            j++;
        }

        int tri2 = i - 1;

        while (tri2)
        {
            cout << tri2;
            tri2--;
        }

        cout << endl;
        i++;
    }
}