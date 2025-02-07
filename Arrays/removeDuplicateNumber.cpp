#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,1,1,2,2,3,3,4,4,5,6,6,7,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int count = 1;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[count] = arr[i];
            v.push_back(arr[count]);
            count++;
        }   
    }

    cout<<"Total Number Count : "<<count<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}