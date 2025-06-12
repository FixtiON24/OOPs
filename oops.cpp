#include<iostream>
#include<string>
using namespace std;
//syntax of class
class teacher{
private:
int salary;
public:    
// properties also know as attributes
    string name;
    string dept;
    // int salary; salary are not public things so we are making it private access modifiers.
    string subject;
    
    // method : method is just a function inside a class this is also called as memeber function
    void change_dept(string new_dept){
        dept = new_dept;
    }
};

int main(){

    teacher t1;// these are object and we can have mutliple obj like(t2,t3...etc) that have properties already describe in class as we know class are blueprint of object.
    t1.name = "lemma"; // (.) dot operator in C++ is used to access members (variables or functions) of an object of a class or struct as we are seeing in this code.
    t1.dept = "maths";
    t1.salary = 50000; // it will display error because of its private now and we cant access it now .
    t1.subject = "lema theorem";
    cout<< t1.name <<endl;
    t1.change_dept("algebra");
    cout<< t1.dept <<endl;

    teacher t2;
    teacher t3;

    return 0;
}