// Given an array of amrks of students, if the marks of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]

#include<iostream>
using namespace std;

int main(){
    int marks[5];

    cout<<"Enter the marks of students: ";
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }

    cout<<"Here's the student rollno who marks is less then 35: ";
    for(int i=0;i<5;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}