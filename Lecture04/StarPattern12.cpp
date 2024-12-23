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
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}