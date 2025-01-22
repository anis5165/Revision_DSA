//Find the maximum value out of all the elements in the array.
#include<iostream>
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

    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]) max = arr[i];
    }

    cout<<"Maximum element is: "<<max<<endl;
}