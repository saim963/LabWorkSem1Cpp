#include <iostream>
using namespace std;

// Function to find the sum of elements in an array using recursion
int arraySum(int arr[], int size, int index)
{
    if (index < 0)
    {
        return 0;
    }

    return arr[index] + arraySum(arr, size, index - 1);
}

// Function to display array elements using recursion
void displayArray(int arr[], int size, int index)
{
    if (index == size)
    {
        return;
    }

    cout << arr[index] << " ";

    displayArray(arr, size, index + 1);
}

int main()
{

    int size;
    int* arr = new int[size];

    cout << "Enter size for the array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "-> ";
        cin >> arr[i];
    }

    cout << "Array elements: ";
    displayArray(arr, size, 0);

    cout << endl;

    int sum = arraySum(arr, size, size - 1);

    cout << "Sum of array elements using recursion: " << sum << endl;

    return 0;
}
