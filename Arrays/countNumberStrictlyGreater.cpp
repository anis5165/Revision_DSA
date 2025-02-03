// Count the number of elements strictly greater than x.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,7,2,6,1,9,10,55,13,65,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 10;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>target) count++;
    }
    cout<<"Count : "<<count<<endl;
}