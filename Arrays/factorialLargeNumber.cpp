#include<iostream>
using namespace std;
void fact(int n){
    long long facts = 1;
    for(int i=1;i<=n;i++){
        facts*=i;
    }
    cout<<"factorial is : "<<facts<<endl;
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    fact(n);
    return 0;

}