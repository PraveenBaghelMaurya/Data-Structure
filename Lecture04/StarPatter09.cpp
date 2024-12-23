#include <iostream>
using namespace std;

int main()
{
    int i = 1, num = 7;
    char ch = 'A';
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }
}