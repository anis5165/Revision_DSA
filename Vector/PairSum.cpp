#include<iostream>
#include<vector>
using namespace std;

//brute force approach
// int main(){
//     vector<int> v = {2,7,11,15};
//     int target = 9;

//     for(int i=0;i<v.size();i++){
//         for(int j=i+1;j<v.size();j++){
//             if((v[i]+v[j])==target){
//                 cout<<v[i]<<"+"<<v[j]<<"="<<target<<endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }



//two pointer approach
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i=0;
    int j=n-1;
    while(i<j){
        int pairSum = nums[i] + nums[j];

        if(pairSum<target) i++;
        else if(pairSum>target) j--;
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}




int main(){
    vector<int> v = {2,7,11,15};
    int target = 26;


    vector<int> ans = pairSum(v,target);

    cout<<"["<<ans[0]<<", "<<ans[1]<<"]"<<endl;
    return 0;
}