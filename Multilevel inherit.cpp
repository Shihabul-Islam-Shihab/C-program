//multilevel
#include<bits/stdc++.h>
using namespace std;
class A{
public:
    int a=10;
    void display(){
    cout<<"a="<<a<<endl;}
};
class B : public A{
public:
    int b=20;
    void display2(){
         display();
    cout<<"b="<<b<<endl;

    }
};
class C:public B{
public:
    int c=30;

  void display3(){
      display2();
  cout<<"c="<<c<<endl;

}};
int main(){
C c;
c.display3();
}







