#include<iostream>
using namespace std;

class A{
string name;
static int serial;
public:
void getdata(string x){
name=x;
serial=serial+1;
}
void putdata(){
cout<<"Enter your name"<<endl;
cin>>name;
 serial++;
}
void display(){
cout<<"Serial="<<serial<<endl;
cout<<"Name:"<<name<<endl;
}
};
int A::serial;

int main(){
A a,a2;
a.putdata();
a.display();
a2.putdata();
a2.display();
}


