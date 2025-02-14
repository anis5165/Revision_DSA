// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Size of an Array is: ";
    cin>>size;

    bool flag = false;
    int arr[size], target;
    cout<<"Elements of an array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
    }

    if(flag == false) cout<<"Unique Array."<<endl;
    else cout<<"Array contains duplicates."<<endl;
}