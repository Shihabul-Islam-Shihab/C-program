//call by address
#include<iostream>
using namespace std;

void adrs(int *x,int *y){
 int temp=*x;
 *x=*y;
 *y=temp;
}

int main(){
int a=10,b=20;
cout<<"Before swap A="<<a<<"\tB="<<b<<endl;
adrs(&a,&b);
cout<<"After swap A="<<a<<"\t B="<<b<<endl;






}











