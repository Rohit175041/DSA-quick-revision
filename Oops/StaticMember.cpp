#include<bits/stdc++.h>
using namespace std;

class Account{
int balance;
static float roi;

public:

    void setBalance(int b){
    balance=b;
    }

    static void setRoi(float r){
    roi=r;
    }


    void show(){
     cout<<balance*roi<<endl;
    }
};

float Account :: roi=3.5f;

int main(){
Account a1;

//a1.setRoi(4.5f);
Account::setRoi(4.5f);

a1.setBalance(5);
a1.show();
return 0;
}
