#include <bits/stdc++.h>
using namespace std;

class GreatestNumberFinder {
private:
    int num1;
    int num2;

public:
    GreatestNumberFinder(int a, int b) : num1(a), num2(b) {}

    int compareAndReturnGreatest() {
        if (this->num1 > this->num2) {
            return this->num1;
        } else {
            return this->num2;
        }
    }
};

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    GreatestNumberFinder finder(a, b);

    int greatest = finder.compareAndReturnGreatest();

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
