#include<bits/stdc++.h>
using namespace std;
#define max_size 5
int q[max_size];
int rear=0,Front=-1;

int enqueue(){

if(Front==max_size-1){
    cout<<"Queue overflow"<<endl;
    return 0;
}

Front=Front+1;
cout<<"Enter the element queue : ";
cin>>q[Front];

return 0;
}

int dequeue(){
if(rear==max_size){
    cout<<"Queue underflow"<<endl;
    return 0;
}
cout<<q[rear]<<endl;
rear=rear+1;
return 0;
}

int print(){
if(rear==Front+1){
    cout<<"Queue is empty"<<endl;
    return 0;
}
for(int i=rear;i<=Front;i++){
    cout<<q[i]<<endl;
}
return 0;
}

int main(){
enqueue();
enqueue();
dequeue();
print();
return 0;
}

