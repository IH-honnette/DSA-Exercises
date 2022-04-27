#include <iostream>

using namespace std;

int main() {
	int j=0,k=0;
	int arr1[] ={1, 8, 3, 2};
	int arr2[] ={8,9,4,6,7};
	int n1 =sizeof(arr1) /sizeof(arr1[0]);
	int n2 =sizeof(arr2) /sizeof(arr2[0]);
	int newArray[n1];

//	  if (arr1 ==NULL || arr2 ==NULL) cout<<"NULL"; exit(1);
//	  if (n1 == 0 || n2 == 0) cout<<"{}"; exit(1);
	 
		for(int i=0; i<n1; i++) {
		  	while(j<n2) {
		  		if(arr2[j] == arr1[i]) {
		  		    newArray[k] =arr2[j];
	//	  		    cout<<"Element in newArray ="<<newArray[k];
					k++;	
		     	}
	//			cout<<arr2[j]<<endl;
				j++;
		}
	//		cout<<"Element in arr1: =="<<arr1[i]<<endl;
	}	

	int n3 =sizeof(newArray)/sizeof(newArray[0]);
	cout<<"The value of n3 is =="<<n3<<endl;
	cout<<"{";
	for(int i=0; i<n3;i++) {
		cout<<newArray[i];
	}
	cout<<"}";
	
	return 0;
}	  
