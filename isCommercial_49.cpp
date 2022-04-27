#include <iostream>

using namespace std;

int isCommercial(int* arr, int size) {
	
	for(int i=0; i<size; i++) {
		if(arr[i] % 2 !=0 && arr[i+1] == arr[i]*arr[i]) return 1;
	}
	
	return 0;
}

int main() {
	int arr[] = {1,2,3,4,16,-4,-5,25,0};
	int size =sizeof(arr) / sizeof(arr[0]);
	
	int result =isCommercial(arr,size);
	
	 result == 1 ? cout <<"Array is commercial"
				 : cout <<"Array is not commercial"<<endl;	
	return 0;
}
