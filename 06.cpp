///6.	Create a base class Vehicle and a derived class Car. Implement default and parameterized constructors and destructors in both classes. 
///    Display messages to demonstrate the order in which constructors and destructors are called.

#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle default constructor" << endl;
    }

    Vehicle(int x) {
        cout << "Vehicle parameterized constructor" << endl;
    }

    ~Vehicle() {
        cout << "Vehicle destructor" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() : Vehicle() {
        cout << "Car default constructor" << endl;
    }

    Car(int x) : Vehicle(x) {
        cout << "Car parameterized constructor" << endl;
    }

    ~Car() {
        cout << "Car destructor" << endl;
    }
};

int main() {
    Car c1;
    Car c2(10);
    return 0;
}
