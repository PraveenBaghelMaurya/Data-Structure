#include <iostream>
using namespace std;
void ReveseArray(int array[], int size)
{
    int start = 0;
    size--;
    while (start <= size)
    {
        swap(array[start], array[size]);
        start++;
        size--;
    }
}
int PrintArray(int array[], int size)
{
    cout << "Reverse array is :\t" << "[";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << array[i] << "  ";
    }
    cout << "]";
    return 0;
}
int main()
{
    int arr[7] = {0, 1, 2, 3, 4, 5, 6};
    ReveseArray(arr, 7);
    PrintArray(arr, 7);
}