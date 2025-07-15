#include<iostream>
#include<algorithm>
using namespace std;


void swapAlternate(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
            // int temp = arr[i];
            // arr[i] = arr[i+1];
            // arr[i+1] = temp;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Size of an array is: ";
    cin>>n;

    cout<<"\nEnter the element of an array is : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    swapAlternate(arr,n);

    return 0;
}