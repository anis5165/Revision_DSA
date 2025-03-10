#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};

    int currSum = 0;
    int maxSum = 0;


    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum = max(maxSum,currSum);

        if(currSum<0) currSum = 0;
    }


    cout<<"Maximum Subarray Sum is: "<<maxSum<<endl;
}