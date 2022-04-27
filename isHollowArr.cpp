#include <iostream>

using namespace std;

int isHollow(int* arr, int n) {
	int start=0;
	int end=n-1;
	int mid =(start + end) / 2;
	cout<<"Mid number"<<mid<<endl;
	if(n <=0 || arr[mid] != 0){
		cout<<"The array at mid !=0"<<endl;
		return 0;
	} 
	int non_zeroLeft =0;
	int non_zeroRight =0;
//		check if we have three or more consecutive zeros 
		if(arr[mid-1] ==0 && arr[mid+1] == 0) {//consecutive zeros at least
	
//			loop in the left part until we reach a non-zero number
		int startLeft =mid-1;
			while(startLeft >= 0  && arr[startLeft] == 0) {
			startLeft--;
			}
//			loop in the right part until we reach a non-zero number
		int startRight =mid+1;
			while(startRight <= end && arr[startRight] ==0) {
				startRight++;
			}
		
//		we need to find the number of non-zeros on the left part and the right part	
//			loop to check the numbers ending
		   while (startRight<=end) {
		   		if(arr[startRight] ==0) {
					return 0;
				}
				non_zeroRight++;
				startRight++;
		   }
			while(startLeft >=0) {
				if(arr[startLeft] == 0) {
					return 0;
				}
			 startLeft--;	
			 non_zeroLeft++;
			}
			
			if(non_zeroRight == non_zeroLeft) return 1;
		}
	cout<<"Function exit"<<endl;
	return 0;
}

int main() {
	int arr[] ={1,2, 0,0, 3,4};
	int size = sizeof(arr) / sizeof(arr[0]);
	int result =isHollow(arr,size);
	
	result == 1 ? cout<<"Array is a hollow array"<<endl
				: cout<<"Array is not a hollow array"<<endl;
	
	return 0;
}
