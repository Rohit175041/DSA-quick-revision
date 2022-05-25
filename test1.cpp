#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={11,22,33};
    array<int,5>a={1,2,3,4,5};
//    cout<<a.size()<<endl;
//    cout<<sizeof(arr)<<endl;
//     for(auto x:arr){
//         cout<<x<<" ";
//     }

    cout<<a.at(2)<<" "<<a.front()<<" "<<a.back()<<" "<<a.empty();

    return 0;
}