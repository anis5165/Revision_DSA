#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m;
    cout<<"Enter Number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter number of col : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter number of element of matrix : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    int max = INT_MIN;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }

    cout<<"Maximum element in 2D Array is: "<<max<<endl;

    

}