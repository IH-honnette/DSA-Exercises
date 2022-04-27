#include <iostream>

using namespace std;

bool isPrime(int n) {
	if(n <=1) return false;
	for(int i=2; i<=n/2; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

int isMagic(int arr[], int size) {
	if(size <=0) return 0;
	int sum =0;
	
	for(int i=0; i<size; i++) {
		if(isPrime(arr[i])) sum += arr[i];
	}
	
	if(sum == arr[0]) return 1;
	
	return 0;
}

int main () {
	
	int arr[] ={8, 5, -5, 5, 3};
	int n =sizeof(arr)/ sizeof(arr[0]);
	
	int result =isMagic(arr,n);
	result ==0 ? cout<<" is Not Magic"<<endl : cout<<"Is Magic"<<endl;
	
	
	return 0;
}
