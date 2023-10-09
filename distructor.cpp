#include <iostream>
using namespace std;

class MyClass{
    int data;
    public:
    MyClass(){
        data = 100;
        cout << "Constructor called="<<data << endl;
    }
    ~MyClass()   // Destructor
    {cout << "Destructor called="<<data << endl;}

    void display(){
        cout << "Object is alive!"<<data << endl;
    }
};
int main(){
        MyClass obj;
        obj.display();
    cout << "After object scope, but before program end." << endl;
}
