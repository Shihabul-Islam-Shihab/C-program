#include<iostream>
using namespace std;

class A{
 public:
     void a(){
     cout<<"Your name?"<<endl;
     }
};
class B:public A{
public:
    void b(){
        a();
    cout<<"This is Shihab\n\n"<<endl;
    }
};
class C:public A{
public:
    void c(){
        a();

    cout<<"Myself Sakib"<<endl;
    }
};
int main(){
    B xx;
xx.b();
    C x;
x.c();

}




