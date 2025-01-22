//Calculate the sum of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Size of an Array is: ";
    cin>>size;

    int arr[size], sum=0;
    cout<<"Elements of an Array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum is: "<<sum<<endl;
}