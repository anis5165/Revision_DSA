#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}