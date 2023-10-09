//Easy shopping list
#include<bits/stdc++.h>
using namespace std;
class shoppinglist{
 string name;
 double price;
 double quantity;
public:
    void putitems(){
    cout<<endl<<"Enter the item name=";
    cin>>name;
    cout<<"Enter the price=";
    cin>>price;
    cout<<"Enter the Quantity=";
    cin>>quantity;
    }
    void display(){
    cout<<setw(10)<<name;
    cout<<setw(10)<<price;
    cout<<setw(10)<<quantity;
    cout<<setw(10)<<price*quantity<<endl;
    }
};
int main(){
int n;
cout<<"Enter the item number=";
cin>>n;
shoppinglist item[n];
for(int i=0;i<n;i++)
    item[i].putitems();

cout<<setw(30)<<"Shopping list"<<endl;
cout<<setw(10)<<"Item name"<<setw(10)<<"Price"<<setw(10)<<"Quantity"<<setw(10)<<"Total"<<endl;
for(int i=0;i<n;i++){
    item[i].display();
}
return 0;
}














