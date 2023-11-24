#include <iostream>
using namespace std;

// Function to swap two numbers by value
void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers by reference
void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2, choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose swapping mechanism:" << endl;
    cout << "1. Call by Value" << endl;
    cout << "2. Call by Reference" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        // Swap by value
        swap_value(num1, num2);
        cout << "Swapped numbers (Call by Value): " << num1 << " " << num2 << endl;
        break;
    case 2:
        // Swap by reference
        swap_reference(num1, num2);
        cout << "Swapped numbers (Call by Reference): " << num1 << " " << num2 << endl;
        break;
    default:
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}