#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 5;
    while (i <= num)
    {
        int j = 1, temp = i;
        while (j <= i)
        {
            cout << temp << " ";
            j++;
            temp--;
        }
        cout << endl;
        i++;
    }
}