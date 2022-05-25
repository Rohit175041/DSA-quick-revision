#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>>arr,int n){
    // for(int i=0;i<n;i++){
    //     cout<<arr[i].first<<"  "<<arr[i].second<<endl;
    // }
    for(auto x:arr){
        cout<<x.first<<"  "<<x.second<<endl;
    }
}

int main(){
    int n,arr1[2];
    vector<pair<int,int>>arr;
    cout<<"Enter no :";
    cin>>n;
    for(int i=0 ;i<n;i++){
        int k=rand();
        arr1[0]=k;
        arr1[1]=k+1;
        arr.push_back({arr1[0],arr1[1]});
    }
    print(arr,n);
    return 0;
}