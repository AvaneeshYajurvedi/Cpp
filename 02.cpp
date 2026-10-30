#include <iostream>
using namespace std;

class Shape {
public:
    float r, l, b, h;

    void circle() {
        cout << "Enter radius: ";
        cin >> r;
        cout << "Circle area: " << 3.14 * r * r << endl;
    }

    void rectangle() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Rectangle area: " << l * b << endl;
    }

    void triangle() {
        cout << "Enter base and height: ";
        cin >> b >> h;
        cout << "Triangle area: " << 0.5 * b * h << endl;
    }
};

class Circle : public Shape {};
class Rectangle : public Shape {};
class Triangle : public Shape {};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    c.circle();
    r.rectangle();
    t.triangle();

    return 0;
}
