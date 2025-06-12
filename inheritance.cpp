#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    student(){
        cout<<"parent class constructor is called"<< endl;
    }
    ~student(){
        cout<<"parent class DESTRUCTOR is called"<< endl;
    }

     void getinfo(){
        cout<<"name of the student: "<< name<<endl;
        cout<<"age of the student: "<< age <<endl;
        cout<<endl;
     }
};  
    // inherted class from student or child class here we are accessing the name and age from the parents class.
    class Newstudent : public student{
        public:
        int roll_no;

        Newstudent(){
        cout<<"child class constructor is called"<< endl;
    }
    ~Newstudent(){
        cout<<"child class DESTRUCTOR is called"<< endl;
    }


        void NEWgetinfo(){
        cout<<"name of the student: "<< name<<endl;
        cout<<"age of the student: "<< age <<endl;
        cout<<"Roll no of the student: "<< roll_no <<endl;
        cout<<endl;
    }
};
int main(){
    student s1;
    s1.name = "aditya";
    s1.age = 22;
    s1.getinfo();
    Newstudent NS1;
    NS1.name = "Rishita";
    NS1.age = 23;
    NS1.roll_no = 8;
    NS1.NEWgetinfo();
}