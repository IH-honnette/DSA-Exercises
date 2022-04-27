#include <iostream>
using namespace std;
#include <cstring>
char *getCharArray(char*arr, int start, int length){
	
	if(arr==NULL) return NULL;
	
	int size= strlen(arr);
	if(start<0 || length>size|| (start+length)>size|| start>=size|| length<0){
		return NULL;
	}
	
	char *res= new char[length];
	
	for(int i=start, x=0; i<(start+length)+1; i++,x++){
		res[x]= arr[i];
	}
	
	return res;
	
}
int main(){
	
	char arr[]={'a','b','c'};
	
	cout<<getCharArray(arr,0,2);
	
	return 0;
}
