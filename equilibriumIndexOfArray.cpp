#include <iostream>

using namespace std;
 
int equilibrium(int arr[], int n)
{
    int i, j;
    int leftsum, rightsum;
    if(n < 3) return -1;
    for (i = 0; i < n; i++)
    {    
        leftsum = 0;
        for (j = 0; j < i; j++) {
        	leftsum += arr[j];
        	cout<<"Left : "<<arr[j]<<endl;
		}
            
        rightsum = 0;
        for (j = i + 1; j < n; j++) {
        	 rightsum += arr[j];
        	 cout<<"Right: "<<arr[j]<<endl;
		}
           
        if (leftsum == rightsum)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 8, 3, 7, 10, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout <<"Equilibrium Index of Array: "<<equilibrium(arr, arr_size);
    return 0;
}
