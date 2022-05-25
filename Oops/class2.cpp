#include<bits/stdc++.h>
using namespace std;

class Complex{
int a,b;
public:

   //Input data
   void set_data(int x,int y){a=x; b=y;}

   Complex add(Complex c){
   Complex temp;
   temp.a=a+c.a;
   temp.b=b+c.b;
   return temp;
   }

   void display(){
   cout<<"\n a="<<a<<" b="<<b<<endl;
   }

   //Output data
   void show_data(Complex c4,Complex c5){
    cout<<"\n a+ib="<<c4.a+c5.a<<"+ i"<<c4.b+c5.b<<endl;
   }
};

int main(){
Complex c1,c2,c3;
c1.set_data(3,4);
c2.set_data(5,8);
c3=c1.add(c2);
c3.display();
c3.show_data(c1,c2);
return 0;
}
