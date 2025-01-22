//Count the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Size of an Array is: ";
    cin>>size;

    int arr[size], target, count=0;
    cout<<"Elements of an array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter the target Element you want to check: ";
    cin>>target;

    for(int i=0;i<size;i++){
        if(arr[i]>target){
            count++;
        }
    }

    cout<<"Elements that is greater then target element is: "<<count<<endl;

}