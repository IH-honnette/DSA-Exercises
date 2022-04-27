#include <iostream>

using namespace std;

int isPOE(int arr[],int size) {
	if(size < 3) return -1;
	
	int idx =0;
	int leftSum =arr[0];
	int rightSum =arr[size-1];
	int leftIndex =0;
	int rightIndex =size -1;
	
	for(int n=1; n <size-2; n++) {
		if(leftSum < rightSum) {
			leftIndex++;
			leftSum +=arr[leftIndex];
			idx =leftIndex +1;
			cout<<"Left index"<<leftIndex<<endl;
		}else {
			rightIndex--;
			rightSum += arr[rightIndex];
			idx =rightIndex -1;
				cout<<"Right index"<<rightIndex<<endl;
		}
	}
	
	if(leftSum == rightSum) return idx;
	
	return -1;
}

int main() {
	int arr[] = {1,8,3,7,10,2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout <<"Equilibrium Index of Array: "<<isPOE(arr, arr_size);
	return 0;
	
}
