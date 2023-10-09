#include<iostream>
#include<conio.h>
using namespace std;
class A{
private:
    int id=27;
    string name="shihab";
public:
    friend class B;
};

class B{
public:
    void putvalue(A obj){
    cout<<obj.id<<"\t"<<obj.name<<endl;
    }

};
int main(){
A aa; B bb;
bb.putvalue(aa);


}
