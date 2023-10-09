//Array of object
#include <iostream>
using namespace std;
#include <string>

class Person {
private:
    string name;
    int age;

public:
    void getdata(){
    cout<<"Enter the name:"<<name;
    cin>>name;
    cout<<"enter the age:";
    cin>>age;
    }
    void display() {
        cout << "Name: " << name << "\n Age: " << age << endl;
    }
};
int main() {
     int n;
     cout<<"Enter total person:";
     cin>>n;
    Person x[n];
    for (int i=0; i<n; i++)
    x[i].getdata();

   for(int i=0;i<n;i++)
    x[i].display();

}





