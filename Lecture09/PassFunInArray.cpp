#include <iostream>
using namespace std;
int fun(int a)
{
    cout << "the value of a is " << a << endl;
    return a;
}
int main()
{
    int arr[10];
    int num = 12;
    arr[3] = fun(num);

    for (int i = 0; i <= 9; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "The Size of arr is :\t" << sizeof(arr);
}