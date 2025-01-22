//Find the elements x in the array. Take array and x as input.
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

    cout<<"Enter the target Element you want to search: ";
    cin>>target;

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            flag = true;
            cout<<"Index of targeted element is: "<<i<<endl;
            break;
        }
    }

    if(flag==false) cout<<"Elements is not found."<<endl;

}