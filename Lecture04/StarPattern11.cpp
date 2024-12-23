#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 3;
    char ch = 'A';
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        cout << endl;
        i++;
    }
}