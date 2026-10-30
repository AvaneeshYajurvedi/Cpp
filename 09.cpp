///9.	Create a class Student with data members rollNo, name, and marks. 
  ///  Use the this pointer in the constructor to distinguish data members from parameters. Display the student details.

#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    Student(int rollNo, string name, float marks) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s(1, "Rahul", 85);
    s.display();
    return 0;
}
