#include <iostream>

using namespace std;


int isArrayOddValent(int* arr,int size){
	
	if(size <=1) return 0;
		
	bool duplicateFlag;
	
	for(int i=0; i< size; i++) {
		
		for(int j=i+1; j<size; j++) {
			if(arr[i] == arr[j]) {
			duplicateFlag =true;
			break;
			}
		}
		
		if(arr[i] % 2 != 0 && duplicateFlag == true) return 1;
	}
	
	return 0;	
}
int main() {
	int arr[] ={5,5};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	int result =isArrayOddValent(arr,n);
	result == 1 ? cout<<"Array is OddValent"<<endl
				: cout<<"Array is not OddValent"<<endl;
				
	return 0;
}
