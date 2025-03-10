#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//brute force
// int main(){
//     vector<int> v = {1,2,2,1,2};

//     int majority = 0;
//     for(int val: v){
//         int freq = 0;
//         for(int ele: v){
//             if(ele==val) freq++;
//         }
//         if(freq>=(v.size()/2)) majority = val;
//     }
//     cout<<"majority Element is : "<<majority<<endl;
// }



//optimize approach (using sorting)
int main(){
    vector<int> v = {1,2,2,1,2};
    sort(v.begin(),v.end());

    int freq = 0;
    int ans = v[0];

    for(int i=1;i<v.size();i++){
        if(v[i] == v[i-1]) freq++;
        else{
            freq = 0;
            ans = v[i];
        }
        if(freq>(v.size()/2)) cout<<ans;
    }

    return ans;
}