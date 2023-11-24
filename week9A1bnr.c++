#include <iostream>
using namespace std;

// Non-recursive function to calculate the GCD of two numbers using Euclidean algorithm
int gcdNonRecursive(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int result = gcdNonRecursive(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " (using iteration) is: " << result << endl;

    return 0;
}