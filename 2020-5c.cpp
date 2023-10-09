#include<bits/stdc++.h>
using namespace std;

class test
{
    int code;
    float price;

public:
    // Default Constructor
    test()
    {
        code = 110;
        price = 50.5;
    }

    // Parameterized Constructor
    test(int c, float p)
    {
        code = c;
        price = p;
    }

    // Copy Constructor
    test(const test &t)
    {
        code = t.code;
        price = t.price;
    }

    void disp()
    {
        cout << "code: " << code << "\t";
        cout << "price: " << price << endl;
    }
};

int main()
{
    test t1; //default constructor
    test t2(222, 99.9); // parameterized constructor
    test t3 = t2; // copy constructor

    t1.disp();
    t2.disp();
    t3.disp();
}
