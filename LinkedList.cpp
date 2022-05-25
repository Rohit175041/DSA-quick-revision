#include<bits/stdc++.h>
using namespace std;

class node{
    public:
 int data;
 node* next;
};

//Creating node of linked list
node *CreateList(int num){
node *ptr=NULL;
node *head=NULL;
node *temp=NULL;

for(int i=0;i<num;i++){
temp=(node*)malloc(sizeof(node));
//cin>>temp->data;
temp->data=rand();
temp->next=NULL;

if(head==NULL)
{
    head=temp;
}
else
{
    ptr=head;
    while(ptr->next!=NULL){
    ptr=ptr->next;
}

ptr->next=temp;
}
}

return head;
}

//Printing whole linked list
node *print(node *head){
    node *temp=NULL;
    int i=0;
if(head==NULL){
    cout<<"List is empty"<<endl;
    return 0;
}else{
  temp=head;
  while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
    i=i+1;
  }
  cout<<"Number of node in list :"<<i<<endl;
}
return head;
}

//Inserting node at a specific position
node *Insert(node *head){
cout<<"Enter the position :";
int pos;
cin>>pos;

node *temp1=(node*)malloc(sizeof(node));
cout<<"Enter the element in list :";
cin>>temp1->data;
temp1->next=NULL;
if(pos==1)
{
    temp1->next=head;
    head=temp1;
}
else if(pos!=1)
{
     node *temp=head;
     for(int i=1;i<pos-1;i++){
            if(temp->next==NULL){
                cout<<"Number of node exceed beyond limit"<<endl;
                break;
            }
        temp=temp->next;
     }
     temp1->next=temp->next;
     temp->next=temp1;
}
return head;
}

//Deleting a specific node in linked list
node *DeletePos(node *head){
cout<<"Enter the postion to delete :";
int pos;
cin>>pos;
node *temp=NULL;
node *temp1=NULL;
node *temp2=NULL;
temp=head;

if(pos==1){
    head=temp->next;
    delete temp;
    temp=NULL;
}
else if(pos!=1)
{
    for(int i=1;i<pos;i++)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp2=temp;
    temp=temp1;
    temp->next=temp2->next;
    delete temp2;
    temp2=NULL;
}
return head;
}

//Deleting whole linked list
node *DeleteList(node *head){
node *ptr=NULL;
while(head!=NULL){
    ptr=head;
    head=head->next;
    delete ptr;
    ptr=NULL;
}
if(head==NULL){
    cout<<"Deletion list success full."<<endl;
}
return head;
}

//Reverse Linked list
node *Reverse(node *head){
node *temp=NULL;
node *temp2=NULL;
node *ptr=head;

while(ptr!=NULL){
    // Store next
    temp=ptr->next;
  // Reverse current node's pointer
    ptr->next=temp2;
  // Move pointers one position ahead.
    temp2=ptr;
    ptr=temp;
}
head=temp2;

return head;
}

//Merging 2 list in a single linked list
node *MergeList(node *head,node *head2){
node *temp=NULL;
node *temp2=NULL;
temp=head;
while(temp!=NULL){
    temp2=temp;
    temp=temp->next;
}
temp2->next=head2;

return head;
}

node *Search(node *head){
node *ptr=head;
int Data;

cout<<"enter the element to search :";
cin>>Data;

while(ptr!=NULL){
    if(ptr->data==Data){
        cout<<"Element found"<<endl;
        return head;
    }
    ptr=ptr->next;
}
cout<<"element not found"<<endl;

return head;
}

//Circular linked list
node *CircularList(node *head){
node *temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=head;
node *temp2=temp->next;

  while(temp2!=temp){
    cout<<temp2->data<<endl;
    temp2=temp2->next;
  }
cout<<temp->data<<endl;
return head;
}

int main(){
node *head=NULL;
node *head1=NULL;
node *head2=NULL;
int num;

cout<<"Enter the number of node :";
cin>>num;
head1=CreateList(num);
head1=print(head1);

cout<<"Enter the number of node in 2nd list :";
cin>>num;
head2=CreateList(num);
head2=print(head2);

//Merging 2 linked list
head=MergeList(head1,head2);

head=Insert(head);
//head=DeletePos(head);
//head=DeleteList(head);
//head=Reverse(head);

//Searching element
//head=Search(head);

//Printing element
head=print(head);

//circular linked list
//CircularList(head);


return 0;
}
