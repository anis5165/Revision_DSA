#include<iostream>
using namespace std;


void sortArr(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}

int main(){
    int arr[] = {1,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;

    // for(int i=0;i<n-1;i++){   //TC - O(n^2)
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j+1]){
    //             flag = true;
    //             break;
    //         }
    //     }
    // }

    sortArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            flag = true;
            break;
        }
    }

    if(flag==false) cout<<"false"<<endl;
    else cout<<"true"<<endl;

}