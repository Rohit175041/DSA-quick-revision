#include<bits/stdc++.h>
using namespace std;

class Complex{
int a;
int b;
public:

~Complex(){
 cout<<"Destructure"<<endl;
}
};

int fun(){
Complex a1;
return 0;
}

int main(){
fun();
return 0;
}

