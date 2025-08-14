#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of vector is: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the element of vector is: ";

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int>v1(n);

    for(int i=0;i<n;i++){
        v1[i] = v[n-1-i];
    }
    display(v1);
}