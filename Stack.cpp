#include<bits/stdc++.h>
using namespace std;
#define Max 4
int stack_arr[Max];
int top=-1;

int push(){

if(top==Max-1)
{
    cout<<"Stack over flow"<<endl;
    return 0;
}
cout<<"Enter your data : ";
top=top+1;
cin>>stack_arr[top];
return 0;
}


int pop(){
if(top==-1){
    cout<<"Stack is empty"<<endl;
    return 0;
}
cout<<stack_arr[top];
top=top-1;

return 0;
}

int print(){
if(top==-1){
    cout<<"Stack is empty"<<endl;
    return 0;
}
int i=0;
i=top;
while(i!=-1){
cout<<stack_arr[top]<<endl;
i=i-1;
}

return 0;
}

int main(){
push();
push();
push();
push();

pop();
//print();

return 0;
}
