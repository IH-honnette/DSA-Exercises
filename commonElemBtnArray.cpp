#include <iostream>

using namespace std;
int* commonElemBtnArray(int arr1[],int arr2[],int n1,int n2) {
	int k=0;
	int* outerArray; int* innerArray; int *newArray;
	int outer,inner;   
      if (arr1 ==NULL || arr2 ==NULL) return NULL;
	  if (n1 == 0 || n2 == 0) return {};
	  if (n1 < n2) {
	  outerArray =arr1;
	  innerArray =arr2;
	  outer =n1; inner =n2;
	  }else {
	  outerArray =arr2;
	  innerArray =arr1;
	  outer =n2; inner =n1;
	  }
	  	
		  	  for(int i=0; i<outer; i++) {
		  		for(int j=0; j<inner; j++) {
	
		  		if(outerArray[i] == innerArray[j]) {
		  		    *(newArray+k) =outerArray[i];
		  		    cout<<"Element in newArray ="<<newArray[k]<<endl;
					k++;	
				}
			}
		}

	return newArray;	
}

int main() {
	int arr1[] ={1, 8, 3, 2};
	int arr2[] ={8,3};
	int n1 =sizeof(arr1) /sizeof(arr1[0]);
	int n2 =sizeof(arr2) /sizeof(arr2[0]);
	
	int* newArray= commonElemBtnArray(arr1,arr2,n1,n2);
	
	if(newArray == NULL) cout<<"null"<<endl;

  cout<<"New Array"<<endl;
	for(int i=0; i<4;i++) {
		cout<<*(newArray+i);
	}
	
	return 0;
}
