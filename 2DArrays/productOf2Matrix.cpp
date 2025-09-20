#include<iostream>
using namespace std;

int main(){

    cout<<"--------------------------\n\n";

    int m,n;
    cout<<"Enter the rows is : ";
    cin>>m;
    cout<<"Enter the cols is : ";
    cin>>n;

    int arr[m][n], brr[m][n];

    cout<<"Enter the element of 1st Matrix is: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n1st Matrix is: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nEnter the element of 2nd Matrix is: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }
    cout<<"\n2nd Matrix is: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int res[n][m];
    if(n!=m){
        cout<<"Product is not possible"<<endl;
        return 0;
    }

    

}