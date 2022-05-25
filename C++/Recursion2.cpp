#include<bits/stdc++.h>
using namespace std;

class text{
public:

int factorial(int num){
    int fact=1;
if(num==0){
    return 1;
}else{
return num+factorial(num-1);
}
}


};

int main(){
text v;
 int num;
 cout<<"Enter the number : ";
 cin>>num;
 cout<<v.factorial(num);
 return 0;
}

