#include<iostream>
#include<vector>
using namespace std;


int main(){
    int t;
    cout<<"Enter target: ";
    cin>>t;
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

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==t){
            cout<<"index of the target is: "<<i<<endl;
            break;
        }
    }
}