#include<iostream>
using namespace std;

int main(){
    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // int arr[2][2];

    // arr[0][0] = 5;
    // arr[0][1] = 4;
    // arr[1][0] = 9;
    // arr[1][1] = 7;


    // cout<<arr[0][0]<<endl;
    // cout<<arr[0][1]<<endl;
    // cout<<arr[1][0]<<endl;
    // cout<<arr[1][1]<<endl;
}