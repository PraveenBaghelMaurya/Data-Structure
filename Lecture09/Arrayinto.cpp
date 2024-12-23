#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {0};
    // std::fill(arr, arr + n, 101); // fill array with 101

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << ",\t";
    }
}