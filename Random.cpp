#include<bits/stdc++.h>
using namespace std;
class test
{
    int code;
    float price;
public:
    test(){
    code=102;
    price=1299;
    }
 test(int x,int y){
 code=x; price=y;
 }

test(const test &t){
code=t.code;
price=t.price;
}
void dis(){
 cout<<"Code="<<code<<"Price="<<price<<endl;
}};
int main(){

test t1;
test t2(109,1599);
test t3=t2;
t1.dis();
t2.dis();
t3.dis();

}




