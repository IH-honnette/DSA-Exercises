#include <iostream>

using namespace std;

int isDaphne(int arr[],int arrSize){
	int countEven =0;
	int countOdd =0;
	if(arrSize <=0) return 0;
	for(int i=0; i<arrSize; i++) {
		if(arr[i] % 2 ==0) {
			countEven ++;
		}else {
			countOdd++;
		}
	}
    
	if(countEven == arrSize || countOdd == arrSize) return 1;	
    	
	return 0;	
}


int main() {
	int arr[] ={1,3,2,5,7};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	int result =isDaphne(arr,n);
	
	result == 0 ? cout<<"Not a Daphne array"<<endl
				: cout<<"Array is a Daphne array"<<endl;
	return 0;
}
