//multiple
#include<bits/stdc++.h>
using namespace std;

class A{
public:
    int a=100;
    void data1(){
     cout<<"a="<<a<<endl;
    }
};
class B{
public :
int b=500;
void data2(){
        cout<<"b="<<b<<endl;  }
};
class C:public A,public B{
    public:
     void add(){
         data1();
         C::data2();
    cout<<"Addition of a&b ="<<a+b<<endl;
    }
};

int main(){
C c;
c.add();




}













