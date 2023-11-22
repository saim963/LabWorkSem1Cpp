#include <iostream>
using namespace std;

// Function to find the maximum element in an array using recursion
int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int maxInRest = findMax(arr, size - 1);

    return (arr[size - 1] > maxInRest) ? arr[size - 1] : maxInRest;
}

// Function to find the minimum element in an array using recursion
int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int minInRest = findMin(arr, size - 1);

    return (arr[size - 1] < minInRest) ? arr[size - 1] : minInRest;
}

int main() {
    int size;

    cout << "Enter size for the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter elements for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxElement = findMax(arr, size);
    int minElement = findMin(arr, size);

    cout << "Maximum element in the array: " << maxElement << endl;
    cout << "Minimum element in the array: " << minElement << endl;

    delete[] arr;

    return 0;
}