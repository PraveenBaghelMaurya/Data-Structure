#include <iostream>
using namespace std;
int primeNumber()
{
    int num;
    cout << "Enter a number:\t";
    cin >> num;
    int count = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    cout << primeNumber();
}