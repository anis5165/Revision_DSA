//leetcode - 75. sort colors (0, 1, and 2)
// three pointers
#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>& v){
    int lo = 0;
    int mid = 0;
    int hi = v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            swap(v[mid],v[hi]);
            hi--;
        }
        else if(v[mid]==0){
            swap(v[mid],v[lo]);
            lo++;
            mid++;
        }
        else mid++;
    }
    return;
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
    cout<<"Shorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}