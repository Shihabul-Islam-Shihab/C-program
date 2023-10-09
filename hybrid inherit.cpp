#include<iostream>
using namespace std;
class A{
public:
    void a(){
    cout<<"Inside class A"<<endl;
    }
};
class B:public A{
public:
    void b(){
    cout<<"Inside class B"<<endl;
    }
};
class C{
public:
    void c(){
    cout<<"Inside class C"<<endl;
    }
};
class D:public B,public C{
public:
    void d(){
    cout<<"Inside class D"<<endl;
    }
};
int main(){
  D dd;
 dd.d();
 dd.c();
 dd.b();
 dd.a();

}











