//while loop
#include<iostream>
using namespace std;
int main(){

    // int n;
    // cout<<"Enter an Number: ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i++;
    // }


    //Ques - 1
    // int n;
    // cout<<"Enter An Number: ";
    // cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<"Total Sum is: "<<sum;



    //Ques - 2
    // int n,sum=0;
    // cout<<"Enter an Number: ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     if(i%2!=0){
    //         sum+=i;
    //     }
    // }
    // cout<<"Odd Number Sum is: "<<sum<<endl;

    //Ques - 3
    // int n;
    // cout<<"Enter an Number: ";
    // cin>>n;
    // bool isprime = true;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         isprime = false;
    //         break;
    //     }
    // }
    // if(isprime==true) cout<<"Prime Number";
    // else cout<<"Not Prime Number";
     

    //nested loop
    int n = 5;
    int m = 5;
    for(int i=1;i<n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}