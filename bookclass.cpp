#include <iostream>
using namespace std;

class Book {
    string title;
    float price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string t, float p) {
        title = t;
        price = p;
    }

    void display() {
        cout << title << " - Rs. " << price << endl;
    }
};

int main() {
    Book b1;
    Book b2("C++ Primer", 650.0);

    b1.display();
    b2.display();
    return 0;
}

