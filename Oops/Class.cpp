#include<bits/stdc++.h>
using namespace std;

class book{

private:
int bookid;
char name[20];
float price;

public:
int detail( ){
    int n;
    cout<<"Enter the no. of book : ";
    cin>>n;
for(int i=0;i<=n-1;i++){
    cout<<"\nEnter bookId : ";
    cin>>bookid;
    cout<<"Enter book name :";
    cin>>name;
    cout<<"Enter book price : ";
    cin>>price;
    cout<<endl;
}
return 0;
}

};



int main(){
 book x;
x.detail();
return 0;
}
