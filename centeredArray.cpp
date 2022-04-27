#include <iostream>
using namespace std;

int findCenteredArray(int* arr,int n);

int main() {
	int arr[] ={8,9,4,6,7};
	int n,centered;
	n=sizeof(arr) / sizeof(arr[0]);
	
	centered=findCenteredArray(arr,n);
	
	if(centered ==0) {
		cout<<"Array is not centered"<<endl;
	}
	else if(centered ==1) 
	{
	cout<<"Array is centered"<<endl;	
	}else{
		cout<<"Unexpected Output!"<<endl;
	}
	
	return 0;
}

int findCenteredArray(int *arr, int n){
	if(n< 3) return 0;
	if(n % 2==0) return 0;
	
	int midIndex = (n-1) / 2;
	
	for(int i=0; i<n/2; i++) 
	{
		if(arr[i] <= arr[midIndex] || arr[i+midIndex+1] <=arr[midIndex]) {
			return 0;
		}
	}
	return 1;
}
