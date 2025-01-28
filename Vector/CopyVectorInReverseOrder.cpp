#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    v.push_back(3);

    for(int i=v.size()-1;i>=0;i--){
        a.push_back(v[i]);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }


}