#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void getStudent() {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }
};

class Marks : public Student {
public:
    int m1, m2, m3;

    void getMarks() {
        cout << "Enter 3 subject marks: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks {
public:
    void display() {
        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 90)
            cout << "Grade: A";
        else if (percentage >= 75)
            cout << "Grade: B";
        else if (percentage >= 60)
            cout << "Grade: C";
        else
            cout << "Grade: D";
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}
