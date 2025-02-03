//WAP to find the largest three elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,7,2,6,1,9,10,55,13,65,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest) largest = arr[i];
    }
    cout<<"First Largest Elements : "<<largest<<endl;
    for(int i=0;i<n;i++){
        if(largest<arr[i]) largest = arr[i-1];
    }
    cout<<"Second Largest Elements : "<<largest<<endl;
    // for(int i=0;i<n;i++){
    //     if(largest<arr[i]) largest = arr[i];
    // }
    // cout<<"Third Largest Elements : "<<largest<<endl;

}