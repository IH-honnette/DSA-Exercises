#include <iostream>

using namespace std;

int allPossibilities(int* arr,int size) {
	if(size <=0) return 0;
	int flag;
	for(int i=0; i<size; i++) {
		flag=0;
		for(int j=0;j<size;j++) {
			if(arr[j] ==i) flag=1;
		}
		if(flag ==0) return 0;
	}
	  return 1;
}

int main() {
	int arr[] ={1,2,0,3,4,5};
	int n =sizeof(arr)/sizeof(arr[0]);
	int result =allPossibilities(arr,n);
	if(result ==1){
	cout<<"Array contains all possibilites"<<endl;
	}else{
		cout<<"Array don't contain all possibilities"<<endl;
	}
	
	return 0;
}
