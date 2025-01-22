//Find the minimum value out of all the elements in the array.
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

    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]) min = arr[i];
    }

    cout<<"Minimum element is: "<<min<<endl;
}