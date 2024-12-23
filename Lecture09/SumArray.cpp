#include <iostream>
using namespace std;
int main()
{
    int size, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    for (int i = 1; i <= size; i++)
    {
        cout << "Enter the element " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 1; i <= size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "\t\tSum of the array is: " << sum;
}