#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 5;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << num - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}