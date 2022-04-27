#include <iostream>

using namespace std;

int reverseInt(int n);
int main() 
{
	int number,reversedNbr;
	cout<<"Enter An Integer"<<endl;
	cin>>number;
	reversedNbr =reverseInt(number);
	cout<<"Initial number: "<<number<<endl;
	cout<<"Reversed Integer: "<<reversedNbr<<endl;
	return 0;
}
int reverseInt(int nbr) {
	
  int newNumber,remainder;
  while (nbr != 0) {
  	remainder =nbr % 10;
  	
  	newNumber =newNumber * 10 + remainder;
  	nbr /= 10;//decrease the number by 10
  }
   	
  return newNumber;	
}
