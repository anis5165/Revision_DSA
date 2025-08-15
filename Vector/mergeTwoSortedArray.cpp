#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& res){
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return;
}

void merge(vector<int>& v, vector<int>& v1, vector<int>& ans){
    int i=0;
    int j=0;
    int k=0;

    while(i<=v.size() && j<=v1.size()){
        if(v[i]>v1[j]){
            ans[k] = v1[j];
            j++;
        }
        else{
            ans[k] = v[i];
            i++;
        }
        k++;
    }

    if(j>i){
        while(j<v1.size()){
            ans[k] = v1[j];
            j++;
            k++;
        }
    }
    else{
        while(i<v.size()){
            ans[k] = v1[i];
            i++;
            k++;
        }

    }
    return;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);

    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(10);

    
    cout<<endl;
    cout<<"element of first vector is: ";
    display(v);

    cout<<"\nelement of second vector is: ";
    display(v1);
    cout<<endl;
    cout<<endl;
    vector<int> ans(v.size()+v1.size());
    
    merge(v,v1,ans);
    display(ans);
    cout<<endl;
}