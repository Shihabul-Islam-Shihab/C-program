#include<bits/stdc++.h>
using namespace std;
class test
{
    int code;
    float price;
public:
    test() // default constructor
    {
        code=110;
        price=50.5;
    }
    test(int c,float p){  // param constructor
    code=c; price=p;
    }
    test(const test &t)  //copy constructor
    {
        code=t.code;
        price=t.price;
    }
    void disp()
    {
        cout<<"code:"<<code<<"\t";
        cout<<"price:"<<price<<endl;
    }
};

int main()
{
    test t1;
    test t2(102,4000);
    test t3=t2;
    t1.disp();
    t2.disp();
    t3.disp();
}
