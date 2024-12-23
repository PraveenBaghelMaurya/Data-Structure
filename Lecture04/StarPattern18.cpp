#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 4;
    while (num >= i)
    {
        int j = 1;
        int star = num - i + 1;
        int space = i - 1;
        while (j <= star)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}