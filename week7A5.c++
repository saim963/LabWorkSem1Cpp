/*Develop a C++ program to find the greatest of two numbers using this pointer which
    returns the member variable.*/
#include <bits/stdc++.h>
using namespace std;

class Number
{
private:
    int n1;
    int n2;

    // this keyword in C++ is an implicit pointer that points to the object of the class of which the member function is called.
public:
    void getData(int n1, int n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    int checkGreatest()
    {
        return ((this->n1 > this->n2) ? this->n1 : this->n2);
    }
};
int main()
{
    int a, b;
    Number n;
    cout << "Enter the numbers:\n";
    cin >> a >> b;
    n.getData(a, b);
    cout << "Greatest number is: " << n.checkGreatest();
}