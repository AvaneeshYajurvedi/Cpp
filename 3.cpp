#include <iostream>
using namespace std;

class Academic {
public:
    int marks;

    void getAcademic() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
};

class Sports {
public:
    int score;

    void getSports() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Academic, public Sports {
public:
    void display() {
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Overall Score: " << marks + score << endl;
    }
};

int main() {
    Result r;
    r.getAcademic();
    r.getSports();
    r.display();
    return 0;
}
