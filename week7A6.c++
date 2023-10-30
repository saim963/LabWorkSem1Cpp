/*Write a C++ program to implement flight class with data member as flight_no., source
    destination and fare. Write a member function to display the flight information using this
    pointer.*/
#include <bits/stdc++.h>
using namespace std;
class Flight{
    private:
    int flight_no;
    string source, destination;
    int fare;

    public:
    void getData(int flight_no, string source, string destination, int fare){
        this->flight_no = flight_no;
        this->source = source;
        this->destination = destination;
        this->fare = fare;
    }

    void printData(){
        cout<<"Flight No.: "<<this->flight_no<<endl;
        cout<<"Source: "<<this->source<<endl;
        cout<<"Destiantion: "<<this->destination<<endl;
        cout<<"Fare: "<<this->fare<<endl;
    }
};

int main(){
    Flight obj1,obj2;
    obj1.getData(6001,"Delhi","Chennai",2500);
    obj1.printData();
    obj2.getData(6002,"Chennai","New Delhi",2500);
    obj2.printData();
}