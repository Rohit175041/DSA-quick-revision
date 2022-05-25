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
void showData(){
cout<<"a="<<a<<" b="<<b<<endl;

}
friend void fun(Complex );
};

void fun(Complex c){
cout<<"a+b="<<c.a+c.b<<endl;
}

int main(){
Complex c1;
c1.set_data(4,6);
fun(c1);
return 0;
}

