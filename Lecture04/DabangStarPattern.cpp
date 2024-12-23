#include <iostream>
using namespace std;

int main()
{
    int i = 1, num = 5;
    while (i <= num)
    {
        // triangle 1
        int tri1 = num - i + 1;
        int j = 1;
        while (j <= tri1)
        {
            cout << j;
            j++;
        }

        // star triangle 2
        int tri2 = 2;
        while (tri2 <= i)
        {
            cout << "*";
            tri2++;
        }

        // star triangle part 2
        int tri3 = 2;
        while (tri3 < i)
        {
            cout << "*";
            tri3++;
        }

        // last triangle

        cout << endl;
        i++;
    }
}