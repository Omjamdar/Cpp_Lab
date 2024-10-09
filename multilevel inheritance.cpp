#include <iostream>
using namespace std;

// Base Class vehicle
class Vehicle {
public:
    void vehicle() {
        cout << "I am a vehicle" << endl;
    }
};

// Derived class FourWheeler (inherits from Vehicle)
class FourWheeler : public Vehicle {
public:
    void fourWheeler() {
        cout << "I have four wheels" << endl;
    }
};

// Derived Class Car (inherits from FourWheeler)
class Car : public FourWheeler {
public:
    void car() {
        cout << "I am a car" << endl;
    }
};

int main() {
    // Create an object of Class Car
    Car myCar;

    // Call methods of Car, FourWheeler, and Vehicle through Car object
    myCar.car();          // Car's method
    myCar.fourWheeler();  // FourWheeler's method
    myCar.vehicle();      // Vehicle's method

    return 0;
}
