//nesting,
#include<iostream>
using namespace std;
class A{
int x,y;
public:
void input(){
cout<<"Input values of x,y=";
cin>>x>>y;
}
void largest(){
if(x>y)
    cout<<"X is the largest";
    else
        cout<<"Y is the largest";
}};

int main(){
 A aa;
 aa.input();
 aa.largest();


}









