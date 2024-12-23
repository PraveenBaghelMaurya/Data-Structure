#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 10, count = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            if (count <= num)
            {
                cout << count << " ";
                count++;
                j++;
            }
        }
        cout << endl;
        i++;
    }
}