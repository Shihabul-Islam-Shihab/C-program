//single
#include <iostream>
using namespace std;
// Base class
class A {
public:
    void eat() {
       cout << "Animal is eating" << endl;
    }
};

class B : public A {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    B x;
    x.eat(); // Accessing the base class method from the derived class
    x.bark();
    return 0;
}
