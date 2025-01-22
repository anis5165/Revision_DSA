#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        // cout<<"I am a Person Constructor...\n";
        this->name = name;
        this->age = age;
    }
    ~Person(){
        cout<<"I am a Person Destructor...\n";
    }
};

class Student : public Person{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){
        // cout<<"I am a Student Constructor...\n";
        this->rollno = rollno;
    }
    ~Student(){
        cout<<"I am a Student Destructor...\n";
    }
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Rollno : "<<rollno<<endl;
    }
};

int main(){
    Student s1("Anish Kumar", 22, 21);

    s1.getinfo();
}