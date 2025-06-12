#include<iostream>
using namespace std;
class one{
    public:
    string name;
};

class two{
    public:
    int age;
};

class three{
    public:
    int rollno;
};

class combination : public one, public two, public three{
    public:
    string subject;

    void getinfo(){
        cout<< name << endl;
        cout<< age << endl;
        cout<< rollno << endl;
        cout<< subject << endl;
    }
};

int main(){
    combination c1;
    c1.name = "aditya";
    c1.age = 22;
    c1.rollno = 16;
    c1.subject = "CSE";
    c1.getinfo();
}
