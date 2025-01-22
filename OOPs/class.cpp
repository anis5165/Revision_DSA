#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:        //access modifier
    float salary;       //data members

public:
    double* cgpaPtr;
    string name;
    string dept;
    string subject;

    //member functions

    //non-paramerterized Constructor
    // Teacher(){
    //     cout<<"Hi, I am Constructor"<<endl;
    // }

    //paramerterized constructor
    Teacher(string n, string d, string sub, float sal, double cgpa){
        name = n;
        dept = d;
        subject = sub;
        salary = sal;
        cgpaPtr = new double;       //dynamically allocated memory through pointer
        *cgpaPtr = cgpa;
    }

    //custom copy constructor
    // Teacher(Teacher &orgobj){
    //     cout<<"I am Copy Constructor...\n"<<endl;
    //     this->name = orgobj.name;
    //     this->dept = orgobj.dept;
    //     this->subject = orgobj.subject;
    //     this->salary = orgobj.salary;
    // }


    //pointer
    Teacher(Teacher &orgobj){
        cout<<"I am Copy Constructor...\n"<<endl;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
        cgpaPtr = new double;
        *cgpaPtr = *orgobj.cgpaPtr;
    }


    //destructor
    ~Teacher(){
        cout<<"\nHii, I am destructor and I delete everything";
        delete cgpaPtr; //deallocate the memory
    }


    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;
    }


    //setter
    void setSalary(float s){
        salary = s;
    }
    //getter
    float getSalary(){
        return salary;
    }
};


int main(){
    // Teacher t1;
    // t1.name = "Ramphal";
    // t1.dept = "computer Science";
    // t1.subject = "c++";
    // t1.setSalary(25000);

    // cout<<"Name : "<<t1.name<<endl;
    // cout<<"Dept : "<<t1.dept<<endl;
    // cout<<"Subject : "<<t1.subject<<endl;
    // cout<<"Salary : "<<t1.getSalary()<<endl;

    Teacher t2("Ramphal", "Computer Science", "c++", 25000, 7.1);
    // t2.getInfo();


    // Teacher t3(t2);     //default copy contructor  -invoke
    // t3.getInfo();
    
    
    // Teacher t3(t2);     //custom copy contructor  -invoke
    // t3.getInfo();

    t2.getInfo();
    Teacher t3(t2);
    *(t3.cgpaPtr) = 9.2;
    t3.name = "neha";
    t3.getInfo();

}