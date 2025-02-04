//Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,7,5,6,6,10,10,13,13,15,15};
    int n = sizeof(arr)/sizeof(arr[0]);


    int unique = 0;
    for(int i=0;i<n;i++){
        unique^=arr[i];
    }

    cout<<"Unique : "<<unique<<endl;
    cout<<(5^7)<<endl;
}