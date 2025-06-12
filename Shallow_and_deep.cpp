#include<iostream>
#include<vector>
#include<string>
using namespace std;

class teacher{
    public:
    string name;
    string subject;
    int* ptrage ;
    int periods ;
    
    teacher(string name, string subject,int age, int periods){

       this->name = name; 
       this->subject = subject;
       ptrage = new int;
       *ptrage = age;
       this-> periods = periods ;
    }
    //copy constructor
    teacher(teacher &obj){
      this->name = obj.name; 
      this->subject = obj.subject;
      // this-> ptrage = obj.ptrage; this is just to copy the point that was pointing to the same memeory so because of that giving the same age.
      ptrage = new int; // here we are trying to make new pointer in thats point to the new memory but have same value but its independent so now we can assign the new value.
      *ptrage = *obj.ptrage;//this will set the new value 
      this-> periods = obj.periods ;
    }

    // destructor call
    ~teacher() {
    delete ptrage;
    cout<<"dectructor"<<endl;
}

    
    void detailes(){
        cout<< "name of techer is : "<< name << endl;
        cout<< "subject of techer is : "<< subject << endl;
        cout<< "age of techer is : "<< *ptrage << endl;
        cout<< "no of periods : "<< periods << endl;
    }
};
    
    int main(){
        teacher t1("lema", "maths",51, 6);
        teacher t2(t1);
        t2.detailes();
        *t2.ptrage= 23;// here we are giving the value 
        t2.detailes();
        
    }