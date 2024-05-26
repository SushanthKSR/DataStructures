#include <iostream>
using namespace std;

int unique(int arr[], int n){

    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
 
int main(){

    int arr[]={2,3,5,3,2,4,4};
    cout<<unique(arr,7)<<endl;
    return 0;

}