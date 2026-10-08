#include <iostream>
#include <string>
using namespace std;

class CanteenItem
{
    string name;
    int price;

public:
    CanteenItem(string n, int p)
    {
        name = n;
        price = p;
    }

    void display()
    {
        cout << "Name of the item: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    CanteenItem a("Samosa", 20);
    CanteenItem b("Tea", 15);

    a.display();
    cout << endl;
    b.display();

    return 0;
}
