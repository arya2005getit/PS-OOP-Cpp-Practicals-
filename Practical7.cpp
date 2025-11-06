#include <iostream>
using namespace std;

class Vehicle {
protected:
    string name;
    int mileage;

public:
    Vehicle(string n = "Unknown", int m = 0) : name(n), mileage(m) {}

    // Virtual function
    virtual void start() {
        cout << "Starting a generic vehicle..." << endl;
    }

    void display() {
        cout << "Vehicle: " << name << " | Mileage: " << mileage << " km/l" << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string n = "Car", int m = 0) : Vehicle(n, m) {}

    // Function overriding
    void start() override {
        cout << "Starting the car with a push button!" << endl;
    }

    
    Car operator+(const Car &obj) {
        Car temp;
        temp.name = name + " & " + obj.name;
        temp.mileage = (mileage + obj.mileage) / 2; // average mileage
        return temp;
    }
};

int main() {
    // Function Overriding + Virtual Function
    Vehicle *v1;
    Car c1("Honda City", 18);
    Car c2("Hyundai Verna", 20);

    v1 = &c1;
    v1->start(); 

    // Operator Overloading
    Car c3 = c1 + c2; 

    cout << "\nCombined Car Details:\n";
    c3.display();

    return 0;
}
