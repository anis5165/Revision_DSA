#include<iostream>
using namespace std;
int main(){
    // int arr[7] = {1, 5, 6, 8, 9, 5, 6};
    // cout<<arr[0];


    int n = 7;
    int arrr[n];
    for(int i=0;i<n;i++){
        cin>>arrr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arrr[i]<<" ";
    }
}