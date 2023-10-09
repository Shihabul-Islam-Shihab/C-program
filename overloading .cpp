#include<iostream>
#include<conio.h>
using namespace std;

int math(int x)
{
  return x*x;
}
int math(int x,int y){
  return x+y;
}


int main(){
int a=10,b=20,c=30;
cout<<"square of x is="<<math(a)<<endl;
cout<<"add="<<math(a,c)<<endl;
getch();
return 0;
}
