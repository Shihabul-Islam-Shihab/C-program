#include <iostream>
using namespace std;
class demo {
string name;
static int count;
public:
  void putdata(){
  cout<<"Name=";
  cin>>name;
  count++;
  }
  void show(){
  cout<<"\nRoll="<<count<<"\nName is="<<name<<"\n"<<endl;
  }
static void abc(){
cout<<"\nStatic function total count="<<count<<endl;
}
};
int demo::count;
int main(){
demo a,b,c;

a.putdata();
a.show();
b.putdata();
b.show();
c.putdata();
c.show();
demo::abc();


}

