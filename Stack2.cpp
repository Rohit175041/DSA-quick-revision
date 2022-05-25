#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
} *head=NULL;

int push(){
node *temp=(node*)malloc(sizeof(node));
//cout<<"Enter your data :";
//cin>>temp->data;
temp->data=rand();
temp->next=NULL;

if(temp==NULL)
{
    cout<<"Stack overflow"<<endl;
    return 0;
}

temp->next=head;
head=temp;

return 0;
}

int pop(){
node *temp=head;

if(head==NULL){
    cout<<"Stack is empty"<<endl;
    return 0;
}
cout<<temp->data<<endl<<endl;
head=temp->next;
delete temp;
temp=NULL;

return 0;
}

int print(){
node *temp3=head;

if(temp3==NULL){
    cout<<"Stack is empty"<<endl;
    return 0;
}

while(temp3!=NULL){
    cout<<temp3->data<<endl;
    temp3=temp3->next;
}
return 0;
}

int main(){
    for(int i=0;i<=10;i++)
        push();
    //for(int i=0;i<=10;i++)
        pop();
    print();
return 0;
}
