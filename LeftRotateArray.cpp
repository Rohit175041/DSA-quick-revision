#include<bits/stdc++.h>
using namespace std;

int Input(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
        //arr[i]=rand();
    }
 return 0;
}

int output(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

int LeftRotate(int arr[],{int n},int n1){
    for(int i=1;i<=n1;i++){
        int s=arr[0];
      for(int i=0;i<=5-1;i++){
        arr[i]=arr[i+1];
      }
    arr[5-1]=s;
    }
    return 0;
}

int main(){
  int n;
  int n1;
  cin>>n;
  cin>>n1;
  int arr[n];
  Input(arr,n);
  LeftRotate(arr,n1);
  output(arr,n);

return 0;
}
