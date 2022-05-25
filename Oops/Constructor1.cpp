
#include<bits/stdc++.h>
using namespace std;

class MyApp{
int a;
int b;

public:
    MyApp(int x,int y){
    a=x;
    b=y;
    }

     MyApp(int x){
    a=x;
    }

    MyApp(){
    a=0;
    b=0;
    }

    int display(){
    cout<<"a="<<a<<" b="<<b<<endl;
    cout<<"a*b="<<a*b<<endl;
    return 0;
    }
};

int main(){
MyApp v(5,8),v2(10),v3;

v2.display();
return 0;
}
