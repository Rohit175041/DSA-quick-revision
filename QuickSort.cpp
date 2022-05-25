
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

void Swap(int arr[],int big ,int l){
int temp=arr[big];
arr[big]=arr[l];
arr[l]=temp;
}

//Pivot element
int Partition(int arr[],int big, int l){
int pivot=arr[l];
int i=big-1;

for(int j=big;j<l;j++){
    if(arr[j]<pivot){
        i++;
        Swap(arr,i,j);
    }
}
 Swap(arr,i+1,l);

return i+1;
}

int Quicksort(int arr[],int l,int r){

if(l<r){
  int  pivot=Partition(arr,l,r);

  Quicksort(arr,l,pivot-1);
  Quicksort(arr,pivot+1,r);
}

return 0;
}

int main(){

int arr[20];
int size1=sizeof(arr)/sizeof(arr[0]);

intput(arr,size1);
Quicksort(arr,0,size1-1);
output(arr,size1);
return 0;
}
