#include <iostream>

using namespace std;

int isDigitSum(int n, int m) {
	//extract the first number 
	if(n < 0 || m < 0) return -1;
	int sum =0; 
	int rem;
	while(n) {
		rem = n % 10;
		cout<<"rem = "<<rem<<endl;
		sum += rem; 
		n /=10;	
	}
	if(sum < m) return 1;
	return 0;
}

int main() {
	
	int result =isDigitSum(978432,4);
	cout<<result<<endl;
	result == 1 ? cout<<"digit is sum"<<endl
				: cout<<"digit is not sum"<<endl;
	return 0;
}
