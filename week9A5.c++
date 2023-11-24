#include <iostream>
using namespace std;

// Function to display array elements using recursion
void displayArray(int arr[], int size, int index)
{
    if (index == size)
    {
        return; // Base case: stop when the index reaches the array size
    }

    // Display the current element
    cout << arr[index] << " ";

    // Recursively call the function to display the next element
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

    cout << "Array elements using recursion: ";
    displayArray(arr, size, 0);

    cout << endl;

    return 0;
}