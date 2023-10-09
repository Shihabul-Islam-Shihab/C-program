//Call by value
#include<iostream>
using namespace std;

void sswap(int x,int y){
int temp=x;
x=y;
y=temp;
cout<<"After swap(Formal argument) A="<<x<<"\tB="<<y<<endl;
}


int main(){
int a=5,b=10;

cout<<"Before swap A="<<a<<"\tB="<<b<<endl;

sswap(a,b);

cout<<"After swap (Actual argument) A="<<a<<"\tB="<<b<<endl;

}





