#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int a, int b, vector<int>& v){
    while(a<=b){
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;  
        a++;
        b--;
    }
    return;
}
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

    display(v);
    reversePart(1,6,v);
    display(v);
}