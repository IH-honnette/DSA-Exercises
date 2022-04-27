#include <iostream>

using namespace std;

int isNbrNormal(int n) {
	
	for(int i=1; i<=n; ++i) {
		
		if(n % i == 0){// find the factor
			if(i % 2 != 0) {// check if it is odd
				if(i ==1 || i == n) continue;
			  return 0;	
			} 
		}	
	}

	return 1;	
}

int main() {
	
	int n;
	cout<<"Enter a Number:"<<endl;
	cin>>n;
	//1, 2, 3, 4, 5, 7, 8
	int result =isNbrNormal(n);
	
	result == 1 ? cout<<n<<" is a Normal number"<<endl
				: cout<<n<<" is not a Normal number"<<endl;
	
	return 0;
}
