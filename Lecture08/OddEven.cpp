#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num & 1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    cout << isEven(22);
}