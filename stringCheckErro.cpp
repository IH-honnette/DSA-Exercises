#include <iostream>
#include <cstring>

using namespace std;

char* checkError(char* arr, int start, int len);

int main() 
{
	int size;
	static char arr[]={'a','b','c'};
	
   char* newArr =checkError(arr,2,1);  
    if(newArr == NULL) {
    	cout<<"null"<<endl;
	} else{
	    cout<<"{";
			 for(int i=0; i<strlen(newArr); i++) {
			 	cout<<newArr[i];	
			}
	    cout<<"}"<<endl;
	}
	
	return 0;
}

char* checkError(char* arr, int start, int len) {

	int size,i,j=0;
	char *newArr= new char[len];
	size =strlen(arr);
	if(arr==NULL) return NULL;
	if(start < 0 || len < 0 || (len > size) || ((start + len) > size) || start>=size) {
			return NULL;
	}
	
	for(i=start; i< len+start; i++) {
		newArr[j] =arr[i];
		j++;
	} 
	return newArr;	
}
