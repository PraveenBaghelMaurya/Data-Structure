#include <iostream>
using namespace std;
int PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
int ReverseArrayElementAlternative(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ReverseArrayElementAlternative(arr, 8);
    PrintArray(arr, 8);
}