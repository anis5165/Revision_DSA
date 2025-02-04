//Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,7,2,6,1,9,10,55,13,65,12};
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i=0;i<n;i+=2){
        arr[i]*=2;
    }
    for(int i=1;i<n;i+=2){
        arr[i]+=10;
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}