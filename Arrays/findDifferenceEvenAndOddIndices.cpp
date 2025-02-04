// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,7,2,6,1,9,10,55,13,65,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int arrr[n-1];
    int even=0, odd=0;
    
    for(int i=1;i<n;i+=2){
        even+=arr[i];
    }
    for(int i=0;i<n;i+=2){
        odd+=arr[i];
    }
    cout<<"Difference is : "<<even - odd<<endl;
}