#include<iostream>
using namespace std;
int main(){
    // int n = 4;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    //character
    // int n = 4;

    // for(int i=0;i<n;i++){
    //     char ch = 'A';
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch+=1;
    //     }
    //     cout<<endl;
    // }


    //square pattern
    // int n=3;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num<<" ";
    //         num+=1;
    //     }
    //     cout<<endl;
    // }

    //square pattern character
    // int n=3;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch+=1;
    //     }
    //     cout<<endl;
    // }


    //triangle pattern
    // int n=6;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    //triangle pattern number
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }


    //triangle pattern character
    // int n=5;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //     }
    //     ch+=1;
    //     cout<<endl;
    // }



    //number triangle
    // int n=5;
    // for(int i=0;i<n;i++){

    //     for(int j=i+1;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    //floyd's triangle pattern
    // int n=4;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<num<<" ";
    //         num+=1;
    //     }
    //     cout<<endl;
    // }


    //floyd's triangle character 
    // int n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //         ch+=1;
    //     }
    //     cout<<endl;
    // } 


    //inverted triangle pattern
    // int n=4;
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }

    //     //nums
    //     for(int k=0;k<n-i;k++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }



    //pyramid pattern
    // int n=4;
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     //Number
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     //Number
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
        
    // }


    //Hollow Diamond Pattern
    int n=4;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
    }

}