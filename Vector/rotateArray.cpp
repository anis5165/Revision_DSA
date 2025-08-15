#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return;
}
void reversePart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int k = 7;
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);
    v.push_back(8);
    int n = v.size();

    // cout<<n<<endl;
    if(k>n) k=k%n;
    display(v);
    cout<<endl;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}