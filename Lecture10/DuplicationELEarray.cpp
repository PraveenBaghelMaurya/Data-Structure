#include <iostream>
using namespace std;
int DuplicateElementInArray(int array[], int size)
{
    int ans = 0;
    for (int i = 0; i < size - 1; i++)
    {
        ans = ans ^ array[i];
    }
    for (int i = 1; i < size - 1; i++)
    {
        ans = ans ^ i;
    }
    cout << "Duplicate Elemnt is : " << ans;
    return ans;
}

int main()
{
    int arr[6] = {5, 2, 7, 3, 5, 4};
    DuplicateElementInArray(arr, 6);
}