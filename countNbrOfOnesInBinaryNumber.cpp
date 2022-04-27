#include <iostream>

using namespace std;

int countOnesInBinaryNbr(int n) {
	int count =0;int i;
	int arr[10];
	int temp =n;
	for(i=0; n>0; i++) {
		arr[i] = n % 2;
		if(arr[i] == 1) count++;
		n =n/2;	
	}
//	int size =sizeof(arr)/sizeof(arr[0]);
//	cout<<"sizeof arr"<<size<<endl;
  cout<<temp<<" In binary = ";
	for(i=i-1; i>=0 ; i--) {
		cout<<arr[i];
	}
	return count;
}

int main() {
	int n;
	cout<<"Count Ones IN a binary version of a numer"<<endl;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	cout<<"\nThe number of ones = "<<countOnesInBinaryNbr(n);
	return 0;
}
