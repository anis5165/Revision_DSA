#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outfile(av_msccs.pdf);
    if(outfile.is_open()){
        outfile<< "Hello"<<endl;
        outfile.close();
        cout<<"data written successfully";
    }
    else{
        cout<<"failed to open file";
    } 
}