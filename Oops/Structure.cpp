#include<bits/stdc++.h>
using namespace std;

struct book{
int bookid;
char name[20];
float price;
};

int detail( book x){
    int n;
    cout<<"Enter the no. of book : ";
    cin>>n;
for(int i=0;i<=n-1;i++){
    cout<<"\nEnter bookId : ";
    cin>>x.bookid;
    cout<<"Enter book name :";
    cin>>x.name;
    cout<<"Enter book price : ";
    cin>>x.price;
    cout<<endl;
}
return 0;
}

int main(){
 book x;
detail(x);
return 0;
}
