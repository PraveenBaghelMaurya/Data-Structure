#include <iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int key)
{
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int size, search;
    cout << "Enter size of array: \t";
    cin >> size;

    int arr[size];
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter element " << i << " : \t";
        cin >> arr[i];
    }

    cout << "Enter element to search: \t";
    cin >> search;

    bool result = LinearSearch(arr, size, search);
    if (result)
    {
        cout << "We founded your search element in array" << endl;
    }
    else
    {
        cout << "We did not founded your search element in array" << endl;
    }
}