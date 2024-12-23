#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 5;
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}