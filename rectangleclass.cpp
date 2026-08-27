#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() { return length * breadth; }
    float perimeter() { return 2 * (length + breadth); }
};

int main() {
    Rectangle r1(5.0, 3.0);
    Rectangle r2(10.0, 4.5);

    cout << "r1 area = " << r1.area() << ", perimeter = " << r1.perimeter() << endl;
    cout << "r2 area = " << r2.area() << ", perimeter = " << r2.perimeter() << endl;
    return 0;
}

