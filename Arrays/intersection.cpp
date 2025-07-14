//WAF to print the intersection of two arrays
#include<iostream>
using namespace std;


void intersectionn(int arr[], int arr2[], int n, int m){
    int result[n+m];
    int k = 0;
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            if(arr[i]==arr2[j]){
                result[k] = arr[i];
                k++;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<result[i]<<" ";
    }
}

int main(){
    int n,m;
    cout<<"Size of an First Array is: ";
    cin>>n;
    cout<<"\nSize of an Second Array is: ";
    cin>>m;

    int arr[n], arr2[m];
    cout<<"Enter the element of first array is : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the element of Second array is : ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    intersectionn(arr,arr2,n,m);

    return 0;
    
}