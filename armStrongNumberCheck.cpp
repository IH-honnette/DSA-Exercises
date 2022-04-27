#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
  int num,remainder,result,length=0;
  int originalNum;
  long temp =1;
  cout<<"Enter the number"<<endl;
  cin>>num;
  originalNum = num;
  while (temp <= num) {
  	length++;
  	temp *=10;
  }	
 while (num != 0) {
 	//remainder contains the last digit
 	remainder =num %10;
 	result += pow(remainder,length);
 	num /= 10;
 }	
 
  if(result == originalNum) 
  	cout<<originalNum <<" is an ArmStrong number.";
  else
    cout<<originalNum <<" is not an Armstrong number!!.";
	return 0;
}

