#include <iostream>
#include <vector>
using namespace std;
int isPrime(int n) {
	if(n <=1) return 0;
	for(int i=2; i<=n/2; i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}
int isFineArray(int* arr, int n){
	vector <int> primeArray;
	int j=0;
	int flag =0;
	if(n <=0) return 0;
	//extract array;
	for(int i=0; i<n; i++) {
		
		if(isPrime(arr[i])) {
			
			primeArray.insert(primeArray.begin(),arr[i]);
		}
	}
	
	for(auto i =primeArray.begin(); i !=primeArray.end(); i++) {
		
		for(auto j=i+1; j !=primeArray.end(); j++) {

			if((*i- *j == 2) || (*i - *j == -2)) {
				flag =1;
			}
		}
	}
	if(flag == 1) return 1;
	return 0;
}

int main() {
	int arr[] ={4, 7, 9, 6, 5};
	int size =sizeof(arr)/sizeof(arr[0]);
	
	int result =isFineArray(arr,size);
	
	result == 1 ? cout<<"It is Fine array"<<endl
				: cout<<"It is not Fine array"<<endl;
	
	return 0;
}
