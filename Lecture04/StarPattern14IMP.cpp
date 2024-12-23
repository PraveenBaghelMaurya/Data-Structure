#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 4;
    while (i <= num)
    {
        int j = 1;
        char ch = 'A' + num - i;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
            ch += 1;
        }
        cout << endl;
        i++;
    }
}