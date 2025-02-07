//leetcode - 75. sort colors (0, 1, and 2)
#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>&  v){
    int n = v.size();
    int noz = 0;
    int noo = 0;
    int noT = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else noT++;
    }
    int ones = noz+noo;
    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0;
        else if(i<ones) v[i] = 1;
        else v[i] = 2;
    }
}
int main(){
    int n;
    cout<<"Size of an Array is : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter an element of an Array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort012(v);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}