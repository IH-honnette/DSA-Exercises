#include <iostream>

using namespace std;
 
int* baseballScores(int* arr, int n)
{
	
	for(int i=0; i<n; i++) {
		if(arr[i] % 2 ==0) {
			arr[i] +=1;
		}
		
		else if(arr[i] % 2 != 0 && arr[i] != 5) {
			arr[i] +=3;
		}else{
			arr[i] +=5;
		}
	}
	return arr;
}

int main() {
	int arr[] ={1,3,5,6,2,4};
	
	int n =sizeof(arr) /sizeof(arr[0]);
	int* newArray =baseballScores(arr,n);
	cout<<"New Array: "<<endl;
	for(int i=0; i<n; i++) {
		
	    cout<<newArray[i]<<endl;
	}
	
	return 0;
}
