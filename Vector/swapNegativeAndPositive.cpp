//move all negative numbers to beginning and positive to end with constant extra space.
#include<iostream>
#include<vector>
using namespace std;
void swapNegativeToPositive(vector<int>& v){
    int n = v.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        if(v[i]>-1 && v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[i]<0) i++;
        else j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(-10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(-11);
    v.push_back(6);
    v.push_back(0);
    v.push_back(-3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    swapNegativeToPositive(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}