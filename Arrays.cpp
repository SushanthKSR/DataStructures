// Check if pair with given Sum exists in Array (Two Sum)

#include <iostream>
using namespace std;

bool findpair(int arr[],int size, int x){
    for(int i=0; i <= size; i++) {
        for(int j=(i+1);j < size; j++){
            if(arr[i]+arr[j] == x ){
            return 1;
            }
        } 
   }
   return 0;
}

int main()
{
    int arr[] = {0,-1,2,-3,1};
    int x = -2;
      int size = sizeof(arr) / sizeof(arr[0]);
 
    if (findpair(arr, size, x)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << x << endl;
    }
 
    return 0;
}

