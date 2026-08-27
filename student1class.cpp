#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    void getData() {
        cout << "Enter roll number: "; cin >> rollNo;
        cout << "Enter name: "; cin >> name;
        cout << "Enter marks: "; cin >> marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.getData();
    s1.display();
    return 0;
}

