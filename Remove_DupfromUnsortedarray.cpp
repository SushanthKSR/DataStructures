#include <iostream>
using namespace std;
 
int removeDuplicates(int arr[],int n){
    if(n==0 || n==1)
        return n;
    
    int x[n];
    int j=0;

    for(int i=0;i < n-1; i++)
        if(arr[i]!= arr[i+1])
             x[j++]= arr[i];

    x[j++] = arr[n-1];

    for(int i; i < j;i++)
       arr[i] = x[i];

    return j;   
        
    }


int main()
{
    int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // removeDuplicates() returns new size of array.
    n = removeDuplicates(arr, n);
 
    // Print updated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}