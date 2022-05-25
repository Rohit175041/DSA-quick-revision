#include<bits/stdc++.h>
using namespace std;

class Dimensions{
public:
    float side=10.67;
};

class Square :public Dimensions{

public:

double area(double x){
return (x*x);
}
};

class Circle :public Dimensions{

    const int pi=3.14;
    public:

double area(double x){
return (pi*x*x);
}
};

int main(){
    Square s1;
    Circle c1;

    cout<<"\nArea of square whose side is 10.67cm : "<<s1.area(s1.side)<<endl;
    cout<<"Area of circle whose radius is 10.67cm : "<<c1.area(c1.side)<<endl;

return 0;
}

