#include <iostream>
using namespace std;

int main()
{
    int i = 1, num = 4;
    while (i <= num)
    {
        int pattern = num - i + 1;
        int space = i - 1;
        int j = 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (j <= pattern)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}