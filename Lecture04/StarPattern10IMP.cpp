#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 3;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}