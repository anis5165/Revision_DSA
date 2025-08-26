#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter Number of rows : ";
    cin>>m;
    int n;
    cout<<"Enter number of col : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter number of element of matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Original matrix is: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n";
    cout<<"\n";
    cout<<"\nTranspose matrix is: \n";
    


    int res[n][m];
    //print

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[j][i]<<" ";
        }
        cout<<endl;
    }
}