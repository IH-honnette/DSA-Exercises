#include <iostream>
#include <vector>
using namespace std;

int isEvens(int n) {
   //loop to check if it is even 
   int isEven =0;
   int rem;
   while(n) {
   	
	   	rem = n % 10;
	   	
	   	if(rem % 2 != 0) return 0;
		   
	   	n /= 10;
   	
   }
	 return 1;
}

int main() {
	
	int result = isEvens(2369);
		result == 1 ? cout<<"It is even"<<endl
			    	: cout<<"It is not even"<<endl;
	
	return 0;
}
