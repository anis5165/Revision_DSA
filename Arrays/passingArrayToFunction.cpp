#include<iostream>
using namespace std;

void display(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[], int size){
    b[0] = 100;
}

int main(){
    int arr[] = {1,4,2,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    change(arr,n);
    display(arr,n);
}