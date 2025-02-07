#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
    int n = v.size();
    int noz = 0;
    int noo = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
}

int main(){
    vector<int> v;
    int n;
    cout<<"Size of an Vector is : ";
    cin>>n;

    cout<<"Enter an Elements of an vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort01(v);
    // int noz = 0;
    // int noo = 0;
    // for(int i=0;i<n;i++){
    //     if(v[i]==0) noz++;
    //     else noo++;
    // }
    // for(int i=0;i<n;i++){
    //     if(i<noz) v[i] = 0;
    //     else v[i] = 1;
    // }
   
    for(int ele : v){
        cout<<ele<<" ";
    }


}