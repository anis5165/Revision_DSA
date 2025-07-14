#include<iostream>
#include<climits>
using namespace std;

void CheckFirstNonRepeatingElement(int arr[], int n){
    int res = 0;
    int num = 1000;
    int freq[num] = {0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        cout<<freq[arr[i]]<<endl;
    }

    for(int i=0;i<n;i++){
        if(freq[arr[i]]==1){
            res = arr[i];
        }
    }

    cout<<"Non Repeating Number is : "<<res<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    CheckFirstNonRepeatingElement(arr,n);
    
}