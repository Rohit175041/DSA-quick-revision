#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
}*head=NULL;

int enqueue(){
node *temp=NULL;
node *temp2=NULL;
temp=(node*)malloc(sizeof(node));
cout<<"enter the data in queue :";
cin>>temp->data;
temp->next=NULL;
if(head==NULL){
    head=temp;
    return 0;
}temp2=head;
while(temp2->next!=NULL){
    temp2=temp2->next;
}
temp2->next=temp;
return 0;
}

int dequeue(){
node *temp=head;
node *temp2=NULL;
if(temp==NULL){
    cout<<"Queue underflow"<<endl;
    return 0;
}
temp2=temp->next;
head=temp2;
cout<<temp->data<<endl;
delete temp;
temp=NULL;
return 0;
}

int print(){
node *temp=head;
if(temp==NULL){
    cout<<"Queue is empty"<<endl;
    return 0;
}
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}
return 0;
}

int main(){
enqueue();
enqueue();
enqueue();
dequeue();
enqueue();
enqueue();
enqueue();


print();
return 0;
}
