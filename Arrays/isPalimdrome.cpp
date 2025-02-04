// If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Number : ";
    cin>>n;

    int temp = n, reverse = 0;

    while(temp!=0){
        reverse = reverse*10 + (temp%10);
        temp/=10;
    }

    if(reverse == n ) cout<<"True"<<endl;
    else cout<<"False"<<endl;

}



//find error (assignment work)
// #include<iostream>
// using namespace std;
// double getAverage(int arr[], int size){
//     int avg = 0;
//     for(int i=0;i<size;i++){
//         avg+=arr[i];
//     }
//     return (avg/size);
    
// }
// int main()
// {
//     int balance[5] = {1000, 2, 3, 17, 50};
//     double avg;
//     avg = getAverage(balance, 5);
//     cout << "Average value is: " << avg << endl;
//     return 0;
// }