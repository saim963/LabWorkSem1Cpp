#include <iostream>
using namespace std;

// Recursive function to calculate the GCD of two numbers using Euclidean algorithm
int gcdRecursive(int a, int b)
{
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int result = gcdRecursive(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " (using recursion) is: " << result << endl;

    return 0;
}