#include <iostream>
using namespace std;

int main()
{
    int i = 1, num = 4;
    char ch = 'A';

    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}