#include<bits/stdc++.h>
using namespace std;

class arra{
int *arr;
int cs;
int ms;

public:
    arra(){
    cs=0;
    ms=1;
    arr=new int[ms];
    }

    void Push_back(const int data){
    if(cs==ms){
       int *oldArry=arr;
       ms=2*ms;
       arr=new int [ms];
       for(int i=0;i<=cs;i++){
        arr[i]=oldArry[i];
       }
       delete []oldArry;
    }
    arr[cs]=data;
    cs++;
    }

    int Pop_back(){
     if(cs>=0){
        return cs--;
     }
     return cs;
    }

    bool isEmpty() const{
    return(cs==0);
    }

    int Front(){
        cout<<arr[0]<<endl;
     return 0;
    }

    int End(){
        cout<<arr[cs]<<endl;
    return 0;
    }

    int pos(int i) {
        if(i<=cs)
            cout<<arr[i-1]<<endl;
    return -1;
    }

    int Size(){
        cout<<cs<<endl;
    return cs;
    }

    int Capacity(){
        cout<<ms<<endl;
    return 0;
    }

    int Insert(int data,int i){
     if(i==cs+1)
        cout<<"Enter the correct position"<<endl;
     else if(i==cs)
        Push_back(data);
     else{
        int temp=arr[i];
        for(int j=i;j<=cs;j++){
          arr[j+1]=arr[i++];
        }
        arr[i]=temp;
     }
     return 0;
    }

    void print(){
    if(cs==0)
        cout<<"Array empty"<<endl;
    else{
        for(int i=0;i<cs;i++)
            cout<<arr[i]<<endl;
    }
    }
};

int main(){
    arra v;
    v.Push_back(11);
    v.Push_back(22);
    v.Push_back(33);
    v.Push_back(44);
    v.Push_back(55);
    v.Push_back(66);
    v.Pop_back();
    v.Size();
    v.Capacity();
    v.pos(3);
    v.Front();
    v.End();
    v.print();

return 0;
}
