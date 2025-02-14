#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1, vector<int>& arr2, int n, int m){
    int i=0;
    int j=0;
    int k=0;
    vector<int> res(n+m);
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            res[k] = arr1[i];
            i++;
        }
        else{
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    if(i==n){
        while(j<m){
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    else{
        while(i<n){
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main(){
    int n,m;
    cout<<"Size of both Array is : ";
    cin>>n>>m;
    vector<int> v1;
    cout<<"Enter an element of First Array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int ele : v1){
        cout<<ele<<" ";
    }
    cout<<endl;
    vector<int> v2;
    cout<<"Enter an element of First Array : ";
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    for(int ele : v2){
        cout<<ele<<" ";
    }
    cout<<"\nMerged Array is : ";
    vector<int> v3 = merge(v1,v2,n,m);
    for(int ele : v3){
        cout<<ele<<" ";
    }
}