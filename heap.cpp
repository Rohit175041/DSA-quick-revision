#include<bits/stdc++.h>
using namespace std;

class heap{
public:

int max_heap(int arr[],int i,int data){

arr[i]=data;
int parent;
while(i>0){
        parent=(i-1)/2;
      if(arr[parent]<arr[i]){
        swap(arr[parent],arr[i]);
        i=parent;
      }else {
        return 0;
      }

}
return 0;
}

int input(int arr[],int num){

for(int i=0;i<=num-1;i++){
    //arr[i]=rand();
    cin>>arr[i];
    max_heap(arr,i,arr[i]);
}
return 0;
}

int Insert(int arr[],int num,int number){

for(int i=num;i<=num+number-1;i++){
    //arr[i]=rand()/1000;
    cin>>arr[i];
    int k=i;
    int parent;
while(k>0){
        parent=(k-1)/2;
      if(arr[parent]<arr[k]){
        swap(arr[parent],arr[k]);
        k=parent;
      }else {
        return 0;
      }

}
k++;
}
return 0;
}

int output(int arr[],int n){
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";
return 0;
}

int heapsort(int arr[],int pos){
 cout<<"Heapsort : "<<arr[0]<<endl;
 arr[0]=arr[pos];
 int i=0;
 while((2*i+1<pos)||(2*i+2<pos)){
    if(arr[2*i+1]>arr[i]||arr[2*i+2]>arr[i])
    {
        if(arr[2*i+1]>arr[2*i+2])
        {
            swap(arr[i],arr[2*i+1]);
            i=2*i+1;
        }
        else
        {
           swap(arr[i],arr[2*i+2]);
           i=2*i+2;
        }
    }

 }
return 0;
}

int heapfy(int arr[],int num){
    output(arr,num);
int pos=num;
for(int i=0;i<=num-1;i++){
    heapsort(arr,pos);
    pos--;
}
return 0;
}

};


int main(){
    heap v;
int num;
cout<<"Enter the size of heap : ";
cin>>num;
int arr[num];

v.input(arr,num);
//int number;
//cout<<"Enter the size of heap : ";
//cin>>number;
//v.Insert(arr,num,number);

//num=num+number;
//v.output(arr,num);
v.heapfy(arr,num);


return 0;
}
