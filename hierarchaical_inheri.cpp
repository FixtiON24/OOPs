#include<iostream>
#include<string>
using namespace std;

class College{
    public:
    string name;
    int UID;

    College(string name, int UID){
        this->name  =  name;
        this->UID  =  UID;
    }
};

class Student: public College{ // same base class
    public:
    int age;
    Student(string name, int UID, int age) : College(name, UID){ 
    this-> age = age;
    }
    void Studentinfo(){
        cout << "name of Student: " << name << endl;
        cout << "UID of Student: " << UID << endl;
        cout << "age of Student: " << age << endl;
        cout<<endl;
    }
};

class Teacher: public College{ //same base class
    public:
    string dept;
    Teacher(string name, int UID,string dept) : College(name, UID){
        this->dept =  dept;
    }
    void Teacherinfo(){
        cout << "name of teacher: "<< name <<endl;
        cout << "UID of tecaher: "<< UID <<endl;
        cout << "dept of tecaher: "<< dept <<endl;
    }

};

int main(){
    Student s1("RAJ",9873, 22);
    s1.Studentinfo();
    Teacher t1("Lemma", 6969, "maths");
    t1.Teacherinfo();
}