#include<bits/stdc++.h>
using namespace std;

class B;
class A{
int a;
public:
    void setData(int x){a=x;}
friend void fun(A,B);
};

class B{
int b;
public:
    void setData(int y){b=y;}
friend void fun(A,B);
};

void fun(A a1,B b1){
cout<<"a+b="<<a1.a+b1.b<<endl;
}

int main(){
A obj1;
B obj2;
obj1.setData(4);
obj2.setData(66);
fun(obj1,obj2);
return 0;
}


