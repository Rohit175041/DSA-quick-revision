#include<bits/stdc++.h>
using namespace std;

class Complex{
int a;
int b;
public:

void set_data(int x,int y){
a=x;
b=y;
}

void show_data(){
cout<<"a="<<a<<" b="<<b<<endl;
}

Complex operator *(Complex c){
 Complex temp;
 temp.a=a*c.a;
 temp.b=b*c.b;
 return temp;
}
};


int main(){
Complex c1,c2,c3;
c1.set_data(2,4);
c2.set_data(6,8);
c3=c2.operator*(c1);
//c3=c1*c2;
c3.show_data();
return 0;
}

