#include <iostream>

using namespace std;

int isMeandra(int* arr, int size) {
	for(int i=0; i<size; i++) {
		if(arr[i] != 0) {
			for(int j=i+1; j<size; j++) {
				if((arr[i]*-1) == arr[j]) return 0;
			}
		}
	}
	
	return 1;
}

int main() {
	int arr[] = {1,2,3,4,-4,-5,0};
	int size =sizeof(arr) / sizeof(arr[0]);
	
	int result =isMeandra(arr,size);
	
	 result == 1 ? cout <<"Array is meandra"
				 : cout <<"Array is not meandra"<<endl;	
	return 0;
}
