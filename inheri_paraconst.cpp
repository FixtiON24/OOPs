#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;

    student(string name, int age){
        this->name = name;
        this->age =  age;
    }

    void getinfo(){
        cout<<"name of student: "<< name <<endl;
        cout<<"age of student: "<< age << endl;
        cout<<endl;
    }
};

class Newstudent : public student{
public:
int rollno;

//constructor that inhertied name and age form parent class
Newstudent(string name, int age, int rollno): student(name, age){
    this->rollno = rollno;
}
void Newgetinfo(){
        cout<<"name of student: "<< name <<endl;
        cout<<"age of student: "<< age <<endl;
        cout<<"rollno of student: "<< rollno <<endl;
        cout<<endl;
    }
};
int main(){
    Newstudent N1("Aditya", 22, 16);
    N1.Newgetinfo();

}