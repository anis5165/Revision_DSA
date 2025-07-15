//WAF to print all the unique values in an array.
#include<iostream>
using namespace std;

void unique(int arr[], int n){

    int ans = 0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
        // cout<<ans<<"->"<<arr[i];
    }

    cout<<"\n"<<ans;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;


    cout<<"\nEnter the element of an array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unique(arr, n);

    return 0;
}