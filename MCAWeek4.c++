#include <bits/stdc++.h>
using namespace std;
// Shift+Alt+F - Format the entire active file.
// Alt+q for codesnap
void week4A1()
{
    int n;
    cout << "Enter a number to check whether even or odd: ";
    cin >> n;
    // using ternary operator
    string result = (n % 2 == 0) ? "Even" : "Odd";
    cout << "The given number is: " << result;
}
/*void week4A2()
{   
    //using bitwise operator
    int x, y;
    cout << "Enter the value of first number: ";
    cin >> x;
    cout << "Enter the value of second number: ";
    cin >> y;
    while (y != 0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    cout << "The sum of given two numbers is: " << x;
}*/
void week4A2Alt()
{
    int num1, num2;
    cout << "Enter two numbers to add: " << endl;
    cin >> num1 >> num2;
    int sum = -(-num1 - num2);
    cout << "Sum: " << sum << endl;
}
void week4A3()
{
    double a, b, c, d, e, f, g;
    // Input values
    cout << "Enter the values of a, b, c, d, e, f, and g: " << endl;
    cin >> a >> b >> c >> d >> e >> f >> g;
    // Evaluate the expression
    double result = ((a + b / c * d - e) * (f - g));
    // Display the result
    cout << "Result of the expression: " << result << endl;
}
void week4A4()
{
    int n;
    cout << "Enter number of terms in fibonacci series: " << endl;
    cin >> n;
    int first = 0, second = 1;
    for (int i = first; i <= n - 1; i++)
    {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
}
void week4A5()
{
    // sqrt n
    int n;
    int flag = 0;
    int i, j;
    cout << "Enter a number to generate all the prime numbers between 1 and n: ";
    cin >> n;
    if (n < 2)
    {
        cout << "invalid entry";
    }
    for (i = 2; i <= n; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << " ";
        }
    }
}
void week4A6()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((int)ch >= 65 && (int)ch <= 90)
        cout << "Given " << ch << " is a capital letter.";
    else if ((int)ch >= 97 && (int)ch <= 122)
        cout << "Given " << ch << " is a small letter.";
    else if ((int)ch >= 48 && (int)ch <= 57)
        cout << "Given " << ch << " is a digit.";
    else if (((int)ch >= 0 && (int)ch <= 47) || ((int)ch >= 58 && (int)ch <= 64) || ((int)ch >= 91 && (int)ch <= 96) || ((int)ch >= 123))

        cout << "Given " << ch << " is a special symbol.";
    else
        cout << "Given " << ch << "is invalid entry for this program."; 
}
void week4A7()
{
    float a, b, c, discriminant, root1, root2;
    cout << "Give the values of constants for the quadratic equation: " << endl;
    cin >> a >> b >> c;
    discriminant = pow(b, 2) - 4 * a * c;
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    if (discriminant >= 0)
    {
        cout << "The quadratic equation is: " << a << "x^2 + " << b << "x + " << c << endl;
        cout << "The roots of this quadratic equation are: " << root1 << " and " << root2;
    }
    else
        cout << "The given quaddratic equation has imaginary roots";
}
void week4A8()
{
    // sum of its own digits raised to the power of no. of digits is equal to itself
    //first write a code to count the number of digits
    int number,sum=0,count=0;
    cout<<"Enter a number to check whether Armstrong or not: ";
    cin >> number;
    int originalNumber = number;
    int temp = number ; 
    int digit;
    while(number>0){
        count++;
        number/=10;
    }   
    while(originalNumber>0){
        digit = originalNumber%10;
        sum+=pow(digit,count);
        originalNumber/=10;
    }
    
    if(sum==temp)
        cout<<"Given number "<<temp<<" is a Armstrong number.";
        else
        cout<<"Given number "<<temp<<" is not a Armstrong number.";
}
void week4()
{
    int n;
    cout << "Enter question number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        week4A1();
        break;
    case 2:
        week4A2Alt();
        break;
    case 3:
        week4A3();
        break;
    case 4:
        week4A4();
        break;
    case 5:
        week4A5();
        break;
    case 6:
        week4A6();
        break;
    case 7:
        week4A7();
        break;
    case 8:
        week4A8();
        break;
    default:
        cout << "Invalid question number. ";
        break;
    }
}
int main()
{
    week4();
    return 0;
}