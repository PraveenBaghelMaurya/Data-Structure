#include <iostream>
using namespace std;
int factorial(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans *= i;
    }
    return ans;
}
int nCr(int n, int r)
{
    int answ = factorial(n) / (factorial(r) * factorial(n - r));
    return answ;
}
int main()
{
    int n, r;
    cout << "Enter the value of N and R :\t";
    cin >> n >> r;

    cout << "According nCr formula the value of nCr is: " << nCr(n, r) << endl;
}