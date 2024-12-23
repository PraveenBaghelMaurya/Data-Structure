#include <iostream>
using namespace std;

// Function to find the maximum value in an array
int findMax(int arr[], int size)
{
    int maxVal = arr[0]; // Initialize max with the first element
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function to find the minimum value in an array
int findMin(int arr[], int size)
{
    int minVal = arr[0]; // Initialize min with the first element
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main()
{
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Declare the array

    // Input the elements of the array
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Find and display the maximum and minimum values
    int maxValue = findMax(arr, size);
    int minValue = findMin(arr, size);

    cout << "Maximum value in the array: " << maxValue << endl;
    cout << "Minimum value in the array: " << minValue << endl;

    return 0;
}
