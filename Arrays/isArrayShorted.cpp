// Check if the given array is sorted or not
#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,7,12,16,21,29,35,43,45,52};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool flag = false; //assume array is shorted

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = true;
            break;
        }
    }

    if(flag==true) cout<<"Array is not shorted."<<endl;
    else cout<<"Array is Shorted."<<endl;
}