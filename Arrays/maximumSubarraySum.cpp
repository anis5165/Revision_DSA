#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5] = {1,2,3,4,5};


    int maxSum = 0;

    for(int st=0;st<n;st++){
        int currSum = 0;
        for(int end=st;end<n;end++){
            currSum+=arr[end];
            maxSum = max(maxSum,currSum);
        }
    }

    cout<<"Max sumArray Sum is: "<<maxSum<<endl;
}