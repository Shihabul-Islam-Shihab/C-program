#include<bits/stdc++.h>
using namespace std;
class A{
public:
    string name;
    int age;
    void display()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
    }
};
class B : public A
{
public:
    int id;
    void disp()
    {   B::display();
        cout<<"ID: "<<id<<endl;

    }
};

int main()
{
   B s1;
    s1.id=27;
    s1.name="SHIHAB";
    s1.age=23;
    s1.disp();

    return 0;
}
