#include <iostream>
using namespace std;
class Movie {
 string title;
 float rating; // out of 10
public:
 void getData() {
 cout << "Enter movie title: "; cin.ignore(); getline(cin, title);
 cout << "IMDb rating: "; cin >> rating;
 }
 void verdict() {
 cout << title << " (" << rating << ") -> ";
 if (rating < 5)
 cout << "Skip It" << endl;
 else if (rating <= 7)
 cout << "One-Time Watch" << endl;
 else
 cout << "Blockbuster, Watch Again!" << endl;
 }
};
int main() {
 Movie m1;
 m1.getData();
 m1.verdict();
 return 0;
}

