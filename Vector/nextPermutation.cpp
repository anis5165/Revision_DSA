#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4};
    int n = v.size();


    int idx = -1;
    //finding pivot index
    for(int i=n-2;i>=0;i--){
        if(v[i] < v[i+1]){
            idx = i;
            break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
        cout<<"Next Permutation is: ";
        for(int val : v){
            cout<<val<<" ";
        }
    }
    reverse(v.begin()+idx+1,v.begin());
    swap(v[idx], v[idx+1]);

    cout<<"Next Permutation is : ";
    for(int ele : v){
        cout<<ele<<" ";
    }
}