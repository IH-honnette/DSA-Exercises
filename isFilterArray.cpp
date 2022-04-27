#include <iostream>

using namespace std;

int isFilterArray(int* a, int n)

       {

           int result = 1;

           for(int i=0;i<n;i++)

           {

               if(a[i]==9)

               {

                   for(int j=0;j<n;j++)

                   {

                       if(a[j]==11)

                       {

                           result = 1;

                           break;

                       }

                       else

                       {

                           result = 0;

                       }

                   }

               }

               if(a[i]==7)

               {

                   for(int j=0;j<n;j++)

                   {

                       if(a[j]==13)

                       {

                           result = 0;

                           break;

                       }

                   }

               }

           }

           return result;

       }

int main() {
	int arr[] ={9, 6,18,7};
	int n =sizeof(arr) / sizeof(arr[0]);
	
	int result =isFilterArray(arr,n);
	 result == 1 ? cout<<"Array is a filter array"<<endl
	 			 : cout<<"Array is not a filter array"<<endl;
	return 0;
}
