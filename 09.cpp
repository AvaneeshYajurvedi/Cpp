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
