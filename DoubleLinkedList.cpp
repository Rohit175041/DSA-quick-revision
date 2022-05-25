#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node *prev;
    int data;
    node *next;
};

//creating node of list
node *CreateList(int num){
node *temp1=NULL;
node *head=NULL;
for(int i=0;i<=num-1;i++){

    node *temp=(node*)malloc(sizeof(node));
    temp->prev=NULL;
    temp->data=rand();
    temp->next=NULL;

    if(head==NULL){
        head=temp;
    }
    else
    {
      temp1=head;
      while(temp1->next!=NULL){
        temp1=temp1->next;
      }
      temp1->next=temp;
      temp->prev=temp1;
    }
}
return head;
}

//Print the element of list
node *print(node *head){
node *temp=NULL;
temp=head;
if(head==NULL)
{
    cout<<"List is empty"<<endl;
    return head;
}
int i=0;
while(temp!=NULL)
{
    cout<<temp->data<<endl;
    temp=temp->next;
    i=i+1;
}
cout<<"Number of node in list : "<<i<<endl;
return head;
}

//Inertion of node at specific point
node *Insert(node *head){
node *temp=NULL;
node *temp2=NULL;

if(head==NULL){
    cout<<"List is empty"<<endl;
    return head;
}

cout<<"Enter the position of element :";
int pos;
cin>>pos;
temp=(node*)malloc(sizeof(node));
temp->prev=NULL;
cout<<"Enter the element in node :";
cin>>temp->data;
temp->next=NULL;

if(pos==1){
    temp->next=head;
    head=temp;
    return head;
}
else
{
  temp2=head;
  for(int i=1;i<=pos-1;i++){
        node *ptr=temp2;
         temp2=temp2->next;
         if(temp2==NULL){
            ptr->next=temp;
            temp->prev=ptr;
            cout<<"Number of node exceed beyond limit"<<endl;
            return head;
         }
  }
  temp->prev=temp2->prev;
  temp->prev->next=temp;
  temp->next=temp2;
  temp2->prev=temp;
}
return head;
}

//Deleting any node
node *Deleting(node *head){
node *temp=NULL;
node *temp2=NULL;

if(head==NULL){
    cout<<"List is empty"<<endl;
    return head;
}

cout<<"Enter the position of element:";
int pos;
cin>>pos;
if(pos==1){
    temp=head->next;
    temp->prev=NULL;
    delete head;
    head=temp;
    return head;
}
else
{
  node *ptr=NULL;
  temp2=head;
  for(int i=1;i<=pos-1;i++){
         ptr=temp2;
         temp2=temp2->next;
         if(temp2->next==NULL){
            ptr->next=NULL;
            delete temp2;
            temp2=NULL;
            cout<<"Number of node exceed beyond limit"<<endl;
            return head;
         }
  }
  temp=temp2->next;
  ptr->next=temp;
  delete temp2;
  temp2=NULL;
}
return head;

}

//Reversing linked list
node *Reverse(node *head){
node *temp1=head;
node *temp2=temp1->next;

temp1->next=NULL;
temp1->prev=temp2;

while(temp2!=NULL){
    temp2->prev=temp2->next;
    temp2->next=temp1;
    temp1=temp2;
    temp2=temp2->prev;
}
head=temp1;
return head;
}

//circular linked list
node *circularlist(node *head){
node *temp=head;
node *temp2=head;
node *temp3=NULL;

while(temp!=NULL){
    temp3=temp;
    temp=temp->next;
}
temp3->next=temp2;
temp2->prev=temp3;
while(temp2!=temp->next){
    cout<<temp2->data<<endl;;
    temp2=temp2->next;
}
return head;
}

int main(){
node *head=NULL;

cout<<"Enter the number of node :";
int num;
cin>>num;

//creating node of list
head=CreateList(num);
//cout<<head->next->next->next->data;


//Insertion at specific node
//head=Insert(head);
//print(head);
//Deleting any node
//head=Deleting(head);

//Reversing linked list
//head=Reverse(head);

//Circular list
circularlist(head);

//printing element of list
//print(head);

return 0;
}
