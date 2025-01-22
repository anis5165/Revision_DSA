//calculate the product of array.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array is: ";
    cin>>size;

    int arr[size], product=1;
    cout<<"Elements of an array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        product*=arr[i];
    }

    cout<<"Product is: "<<product<<endl;
}