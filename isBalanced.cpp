#include <iostream>
#include <vector>
using namespace std;

int isBalanced(int* arr, int n) {
	int flag =0;
	if(n <= 0) return 0;
	
		for(int i=0; i<n; i++) {
			if(arr[i] > 0) {
				for(int j=i+1; j<n; j++) {
				if(arr[i] == abs(arr[j])) {
					flag =1;
				}
			}
		}else if(arr[i] < 0) {
			for(int k=i+1; k<n; k++) {
			if(abs(arr[i]) == arr[k]) {
				flag =1;
				}
			}
		}
	}
		
    if(flag == 1) return flag;		 
	return 0;
}

int main() {
	int arr[] ={-5, 2, -2};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int result = isBalanced(arr,size);
		result == 1 ? cout<<"It is Balanced"<<endl
				: cout<<"It is not Balanced array"<<endl;
	
	return 0;
}
