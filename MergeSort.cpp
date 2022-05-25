
#include<bits/stdc++.h>
using namespace std;

void intput(int arr[],int size1){

for(int i=0;i<size1;i++){
    arr[i]=-rand();
}

}

void output(int arr[],int size1){

for(int i=0;i<size1;i++){
    cout<<arr[i]<<endl;
}

}

void Merge(int arr[],int big,int mid,int last){
int n1=mid-big+1;
int n2=last-mid;

int a[n1];
int b[n2];

for(int i=0;i<n1;i++){
    a[i]=arr[big+i];
}

for(int i=0;i<n2;i++){
    b[i]=arr[mid+1+i];
}

int i=0;
int j=0;
int k=big;
while(i<n1&&j<n2){
    if(a[i]<b[j]){
        arr[k]=a[i++];
    }
    else
    {
        arr[k]=b[j++];
    }
    k++;
}

while(i<n1){
    arr[k++]=a[i++];
}
while(j<n2){
    arr[k++]=b[j++];
}

}

void mergesort(int arr[],int big,int last){
if(big>=last){
    return ;
}
int mid=(big+last)/2;
mergesort(arr,big,mid);
mergesort(arr,mid+1,last);
Merge(arr,big,mid,last);
}

int main(){

int arr[20];
int size1=sizeof(arr)/sizeof(arr[0]);

intput(arr,size1);
mergesort(arr,0,size1-1);
output(arr,size1);
return 0;
}
