#include<iostream>
#include<vector>
using namespace std;
// void change(vector<int> a){     //vectors are pased by value, each time you pass new vector is created
//     a[0] = 100;

//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
void change(vector<int>& a){     //pass by reference 
    a[0] = 100;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(5);



    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}