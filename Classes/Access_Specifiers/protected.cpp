/*
* To inherit from a class, use the : symbol.
* Instead of creating a new class, it is advantageous for using the existing class.
*
*/

#include <iostream>
using namespace std;

class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle { // takes it from here
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}