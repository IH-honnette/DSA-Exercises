#include <iostream>

using namespace std;

int isBeanArray(int* arr, int n) {
   if(n < 0 ) return 0;
  int flag =0;
   for(int i=0; i< n; i++) {
   	int num =arr[i];
     flag =0;
   	   for(int j=0; j< n; j++) {
//   	   	checkif there is an n-1 or n+1 of value arr[i]
           
				if(arr[j] == num +1 || arr[j] == num -1) {
//					cout<<arr[i]<<" j ="<<arr[j]<<endl;
					flag =1;
					break;
				}
		  }
   }
   
   if(flag == 1) return 1;
   
   
   cout<<"function exit"<<endl;
   return 0;
   

}

int main() {
	int arr[] ={3, 4, 5, 7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int result =isBeanArray(arr,size);
	
	result == 1 ? cout<<"Array is a Bean array"<<endl
				: cout<<"Array is not a Bean array"<<endl;
	
	return 0;
}
