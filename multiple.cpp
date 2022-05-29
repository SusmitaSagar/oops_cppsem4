#include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal() {
      cout << "Mammals can give direct birth." << endl;
    }
};

class Bird {
  public:
    Bird() {
      cout << "Winged animal can fly" << endl;
    }
};

class Bat: public Mammal, public Bird {};

int main() {
    Bat b1;
    return 0;
}