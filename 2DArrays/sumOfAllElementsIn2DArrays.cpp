#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of cols : ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the element of an 2D Array is : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }

    cout<<"Total sum of 2DArray element is : "<<sum<<endl;

    
}