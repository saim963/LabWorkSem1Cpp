#include <iostream>
using namespace std;

class Sample {
private:
    int data;

public:
    Sample(int value) : data(value) {}

    // Member function to return a reference to the current object
    Sample& returnThis() {
        return *this;
    }

    // Member function to get a modifiable reference to data
    int& getData() {
        return data;
    }
};

int main() {
    Sample obj(42);

    // Using the returnThis() member function to get a reference to the current object
    Sample& ref = obj.returnThis();

    cout << "Original object's data: " << obj.getData() << endl;
    cout << "Referenced object's data: " << ref.getData() << endl;

    // Modify the data through the reference
    ref.getData() = 99;

    // Verify that the data is modified in the original object as well
    cout << "Original object's data after modification: " << obj.getData() << endl;
    cout << "Referenced object's data after modification: " << ref.getData() << endl;

    return 0;
}
