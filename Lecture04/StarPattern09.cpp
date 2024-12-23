#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 3;
    char ch = 'A', temp;

    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}