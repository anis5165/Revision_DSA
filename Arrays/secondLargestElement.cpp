//Find the second largest element out of all the elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array is: ";
    cin>>size;

    int arr[size];
    cout<<"Elements of an array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int max=INT_MIN, smax=INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]) max = arr[i];
    }
    
    for(int i=0;i<size;i++){
        if(smax<arr[i] && max!=arr[i]){
            smax = arr[i];
        }
    }

    cout<<"Second Largest element is: "<<smax<<endl;
}