#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
  int salary;

public:

//constructor syntax
    teacher(){
        cout<< "hi i am constructor\n";
        dept = "physics";
    } // yeh ek user define constructer hai or issme humne dept= physics rkha hai so jab v koi v obj creat hoga uska dept by default physics ho jayega 
    
//     Constructor is a function inside a class — not a statement.It follows function syntax, not statement syntax. Just like any other function, it ends with a closing brace }, not a semicolon.

    string name;
    string dept;
    string subject;

    // setter function
    void setsalary(int s){
        salary= s;
    }
    // getter function and its typically do not take any parameters.
    int getsalary(){
        return salary;
    }
};


int main(){
    teacher t1;
    teacher t2;// t2 ek obj hai isske baane ke karn "hi i am constructor\n" yeh wala line print ho rha hai q ke constructor automatically sign kr de rha or aagr hum constructor nhi baante hai toh c++ automatically baanta deta h. humesa

    t1.setsalary(50000);
    cout<< t1.dept<<endl;// as you can see we didn't declear dept in main but still because of constructor issne uski value le li hai

    cout<< "salary of teacher t1 is: " << t1.getsalary() << endl; // even tho salary is in private class we can access through public class function that is setter nad getter funciton it's not direclty access the salary buit via a function.

    return 0;
}
