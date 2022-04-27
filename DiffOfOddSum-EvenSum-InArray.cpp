#include <iostream>

using namespace std;

int diffOddSumEvenSum(int *arr,int n);

int main() {
	int n;
	int arr[] ={};
	 n =sizeof(arr) / sizeof(arr[0]);
	int value;
        value=diffOddSumEvenSum(arr,n);
	
	cout<<"The Value is:"<<value<<endl;
	return 0;
}

int diffOddSumEvenSum(int *arr,int n) {
  int evenSum=0; 
  int oddSum=0; 
  int value;
  for(int i=0; i<n; i++) {
	  	if(arr[i] % 2 ==0) {
	  		evenSum += arr[i];
		  }else {
		  	oddSum += arr[i]; 
		  }
   }
  value =oddSum -evenSum;
  return value;
}
