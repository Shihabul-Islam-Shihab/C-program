//Object as argument
#include<iostream>
using namespace std;

class X{
int a=10,b=20;
public:
    void sum(){
    cout<<"SUM="<<a+b;
    }
};

void printsum(X x){
x.sum();
}
int main(){
X xx;
printsum(xx);


}




