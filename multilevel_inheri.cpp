#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;

    person(string name, int age){
        this->name = name;
        this->age =  age;
    }

};

class student : public person{
    public:
    int rollno;
    student(string name, int age, int rollno) : person(name, age){
    this-> rollno = rollno;
    }
};

class gradestduent : public student{
    public:
    string subject;
    gradestduent(string name, int age, int rollno, string subject) : student(name, age, rollno){
        this->subject = subject;
    }

    void getinfo(){
        cout<< "name: "<< name <<endl;
        cout<< "age: "<< age <<endl;
        cout << "rollno: " << rollno <<endl;
        cout<< "subject: "<< subject <<endl;
        
    }
};

int main(){
    gradestduent g1("aditya", 22, 16, "physics");
    g1.getinfo();
}