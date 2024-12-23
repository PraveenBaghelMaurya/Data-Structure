#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 4;
    while (i <= num)
    {
        int j = 1;
        int space = num - i;
        int pattern = num - i + 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}