#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v[5,7]; //initial size is 5 and each element is 7.
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    
}