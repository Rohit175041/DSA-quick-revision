#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int n){
	int i;
	for(i=0;i<n;i++)
	{
		int e;
		//printf("Enter the element you want to add to the array:");
		//scanf("%d", &e);
		//arr[i]=e;
		arr[i]=rand();
	}
}
void print(int arr[], int n){
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d - ", arr[i]);
	}
}
int del(int arr[], int n){
	int m,i;
	printf("\nEnter the position of thr element to be deleted:");
	scanf("%d",&m);
	if(m<=0||m>n)
	printf("invalid number entered\n");
	else
	{
		for(i=m-1;i<=n-1;i++)
		{
		arr[i]=arr[i+1];
		}
	}
	n--;
	print(arr,n);
	return n;
}
int sum(int arr[], int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
void rev(int arr[],int n){
	printf("\n");
	int i;
	for(i=n-1;i>=0;i--){
		printf("%d-", arr[i]);
	}
	printf("\n");
}
int main()
{
	int i,n;

	printf("Enter the number of elements you want in the array:");
	scanf("%d", &n);
	int arr[n];
	insert(arr,n);
	printf("\n");
	print(arr,n);
	n=del(arr,n);
	rev(arr,n);
	n=del(arr,n);
	int j;
	j=sum(arr,n);
	printf("\nThe sum of the numbers in the array is %d\n",j);
	rev(arr,n);
}
