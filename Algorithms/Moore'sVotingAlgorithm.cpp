#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,2,1,2};
    int n = v.size();

    int freq = 0;
    int ans = 0;

    for(int i=0;i<n;i++){
        if(freq==0) ans = v[i];
        else if(ans == v[i]) freq++;
        else freq--;
    }

    cout<<"Majority Element is : "<<ans<<endl;
}