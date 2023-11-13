#include <iostream>
//factorial of given number non-recursive
int main()
{
    int number;
    std::cout << "Enter a number to get its factorial: ";
    std::cin >> number;

    // now comes the condition if number given is -ve, 0 or +ve
    if (number < 0)
    {
        std::cout << "Factorial of negative number is not defined.";
    }
    else if (number == 0)
    {
        std::cout << "Factorial of 0: 1";
    }
    else
    {
        int factor = 1;
        for (int i = 1; i <= number; i++)
        {
            factor = factor * i;
        }
        std::cout << "Factorial of " << number << ": " << factor;
    }

    return 0;
}