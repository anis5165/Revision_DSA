// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.
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
    int i;
    for(i=0;i<size;i++){
        if(arr[i]!=i+1){
            cout<<"Missing Number is : "<<i+1;
            flag = true;
            break;
        }
    }
    if(flag==false) cout<<size+1<<endl;
}