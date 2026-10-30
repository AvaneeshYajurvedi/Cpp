///7.	Create a base class Employee with a function display(). Override display() in the derived class Manager. 
///Use the scope resolution operator to call both the base-class and derived-class versions of the function

#include <iostream>
using namespace std;

class Employee {
public:
    void display() {
        cout << "Employee display" << endl;
    }
};

class Manager : public Employee {
public:
    void display() {
        cout << "Manager display" << endl;
    }
};

int main() {
    Manager m;

    m.Employee::display();
    m.display();

    return 0;
}
