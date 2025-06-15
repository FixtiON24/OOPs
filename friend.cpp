#include<iostream>
using namespace std;

class Idk{
    private:
    string name;
    int age;
    Idk(string name, int age){
        this->name  = name;
        this->age =  age;
    }
    
    //defination of friend class
    friend class IDK2;
    ~Idk(){
         cout << "Idk destructor called" << endl;
    }//destructor

};

class IDK2 : public Idk{
    public:
    string school_name;

    IDK2(string name, int age, string school_name): Idk(name, age){
        this->school_name  = school_name;
    }
    void details(){
        cout<< "name of student: "<< name << endl;
        cout <<"name of school: "<< school_name <<endl;
        cout<< "age of student: "<< age << endl;

    }
    ~IDK2(){
         cout << "IDK2 destructor called" << endl;
    }//destructor
};

int main(){

    IDK2 obj1("Aditya", 22, "CS DAV");
    obj1.details();
    return 0;
}