//WAP to find the largest three elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,7,2,6,1,9,10,55,13,65,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int third = INT_MIN;
    int second = INT_MIN;
    int first = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second){
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third){
            third = arr[i];
        }
    }
    cout<<"First Largest Elements : "<<first<<"\nSecond Largest Element : "<<second<<"\nThird Largest Elements : "<<third<<endl;

}