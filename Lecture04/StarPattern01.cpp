#include <iostream>
using namespace std;
int main()
{
    int i = 1, num;
    cout << "Enter matrix size\t:";
    cin >> num;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << j << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
}