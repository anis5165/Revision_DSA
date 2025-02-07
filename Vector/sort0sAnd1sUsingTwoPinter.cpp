#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[i]==0) i++;
        else j--;  
    } 
    
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}