#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n], arr2[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << "-" << arr2[i] <<endl;
    }

    int lo = INT_MAX;
    int hi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(hi < arr2[i]){
            hi = i;
        } if(lo > arr2[i]){
            lo = i;
        }
    }

    cout << "The largest element: " << arr[hi] << endl;
    cout << "The smallest element: " << arr[lo] << endl;
}