#include<bits/stdc++.h>
using namespace std;

int main(){
int arr1[4];
int arr2[5];

int size1=sizeof(arr1)/sizeof(arr1[0]);
int size2=sizeof(arr2)/sizeof(arr2[0]);

for(int i=0;i<size1;i++)
    cin>>arr1[i];

for(int i=0;i<size2;i++)
    cin>>arr2[i];

int size3=size1+size2;
int arr3[size3];

//merging two array
for(int i=0;i<=size3-1;i++){
   if(i<=size1-1){
     arr3[i]=arr1[i];}
   else{
     arr3[i]=arr2[i-size2+1];}
}

//swaping element
int j=0;
while(j<=size3-1){
    if((size3-1)/2!=0&&j==size3-1){
        arr3[size3-1];
        break;
    }
    int temp=arr3[j];
    arr3[j]=arr3[j+1];
    arr3[j+1]=temp;
    j=j+2;
}

for(int i=0;i<size3;i++)
    cout<<arr3[i]<<endl;

return 0;
}
