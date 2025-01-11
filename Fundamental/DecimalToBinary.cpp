#include<iostream>
using namespace std;


int binToDecimal(int binNum){
    int ans = 0, pow = 1;
    while(binNum>0){
        int rem = binNum%10;
        ans+=(rem*pow);
        binNum/=10;
        pow*=2;
    }
    return ans;
}


int main(){
    // int n;
    // cout<<"Enter an Number: ";
    // cin>>n;
    // int ans = 0;
    // int pow = 1;
    // while(n>0){
    //     int rem = n%2;
    //     n/=2;
    //     ans+=(rem*pow);
    //     pow*=10;
    // }
    // cout<<"Binary Number is: "<<ans<<endl;

    // cout<<"Binary Number is: "<<binToDecimal(n)<<endl;






    int a = 3, b = 4;

    cout << (a ^ b) << endl;
    return 0;





}