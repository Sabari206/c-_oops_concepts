#include <iostream>
using namespace std;
class Reality
{
public:
 virtual void experience()
 {
 cout << "You are experiencing reality." << endl;
 }
};
class MatrixReality : public Reality
{
public:
 void experience()
 {
 cout << "Matrix: The code surrounds you." << endl;
 }
};
class RealWorld : public Reality
{
public:
 void experience()
 {
 cout << "Real World: You see beyond the simulation." << endl;
 }
};
int main()
{
 MatrixReality matrix;
 RealWorld real;
 Reality *reality;
 reality = &matrix;
 reality->experience();
 reality = &real;
 reality->experience();
 return 0;
}
