//const overloading
#include <iostream>
using namespace std;

class test {
    int value1;
    double value2;

public:
    test() {
        value1 = 0;
        value2 = 0.0;}
    test(int val) {
        value1 = val;
        value2 = 0.0;}
    test(double val) {
        value1 = 0;
        value2 = val;}
    test(int x, float y) {
        value1 = x;
        value2 = y;}
    void dis() {
        cout << "value1: " << value1 << "\tvalue2: " << value2 << endl;}
};
int main() {
    test t1;
    test t2(42);
    test t3(3.14);
    test t4(42, 3.14);

    obj1.dis();
    obj2.dis();
    obj3.dis();
    obj4.dis();
return 0;
}

