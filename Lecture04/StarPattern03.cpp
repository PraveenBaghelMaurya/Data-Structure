#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 5, count = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << count << "\t";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}