#include <iostream>
using namespace std;

int main()
{
    int num = 10, sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    cout << "Sum of 1 to " << num << " is : " << sum;
}