
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Reverse(int n) {
        if(n<0){
       int r=0;
       cout<<"-";
        while(n<0){
            r=(n%10)*(-1);
            cout<<r;
            n=n/10;
        }
        }else{
              int r=0;
        while(n>0){
            r=n%10;
            cout<<r;
            n=n/10;
        }
        }

        return 0;
    }
};

int main(){
    Solution v;
    int num;
    cin>>num;
    cout<<endl;
    v.Reverse(num);
    return 0;
}
