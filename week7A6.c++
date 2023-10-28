#include <bits/stdc++.h>
using namespace std;

class Flight {
private:
    int flight_no;
    string source;
    string destination;
    double fare;

public:
    Flight(int flightNumber, const string& src, const string& dest, double flightFare)
        : flight_no(flightNumber), source(src), destination(dest), fare(flightFare) {}

    void displayFlightInfo() {
        cout << "Flight Information:" << endl;
        cout << "Flight Number: " << this->flight_no << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: $" << this->fare << endl;
    }
};

int main() {
    // Create a Flight object and set its data
    Flight flight1(101, "New York", "Los Angeles", 350.50);

    // Display the flight information using the member function
    flight1.displayFlightInfo();

    return 0;
}
