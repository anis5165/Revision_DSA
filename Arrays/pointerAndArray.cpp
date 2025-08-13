#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* ptr = arr;     //giving address of the first element of an array
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

    *ptr = 8;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i[ptr]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i[arr]<<" ";
    }

}