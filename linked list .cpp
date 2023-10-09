 #include<bits/stdc++.h>
 using namespace std;

 struct node{
 int data;
 struct node *next;
 };
 int main(){
 struct node *a=NULL;
 struct node *b=NULL;
 struct node *c=NULL;

 a = new struct node;
 b = new struct node;
 c =new struct node;

 a->data=10;
 b->data=20;
 c->data=30;

 a->next=b;
 b->next=c;
 c->next=NULL;

 //Traverse a link list
 while(a!=NULL){
 cout<<a->data<<"->>";//<<endl;
 a=a->next;
 }
 return 0;
 }
