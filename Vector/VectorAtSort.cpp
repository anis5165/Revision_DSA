#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(5);

    // v.at(2) = 56;
    // cout<<v.at(2)<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    sort(v.begin(),v.end());
    cout<<endl; 
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}