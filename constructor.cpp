// #include<iostream>
// #include<vector>

// using namespace std;
// //default construtor
// class Chai{
//     public:
//     Chai(){
//     teaname = "Unknow tea";
// }
//     string teaname;
//     int serving;
//     vector<string> items;

//     void chaidetailes(){
//         cout<<"Tea name: "<<teaname<<endl;
//         cout<< "cup of tea: "<< serving<<endl;
//         cout<< "iteams: ";
//         for(string item : items){
//             cout << item <<" ";

//         }

//     }

// };

// int main(){

//     Chai tea1;
//     // tea1.teaname = "boba tea"; without assign the name it will give unknow tea cause we use constructor to assign the name and thats applicable to all the object if we didn't assign the name it will give unknow tea
//     tea1.serving = 4;
//     tea1.items = {"milk", "suagr", "boba", "tealeafs", "ice"};
//     tea1.chaidetailes();

//     return 0 ;
// }

// //Parameter constructor
// #include<iostream>
// #include<vector>
// using namespace std;

// class Chai{
//     public:
//     string teaname;
//     int serving;
//     vector<string> items;

//     Chai(string name, int servinggg, vector<string>item){
//         teaname=name;
//         serving = servinggg;
//         items= item;
//     }
//     void chaidetailes(){
//         cout<<"Tea name: "<<teaname<<endl;
//         cout<< "cup of tea: "<< serving<<endl;
//         cout<< "iteams: ";
//         for(string item : items){
//             cout << item <<" ";

//         }

//     }

//     };
// int main(){
//     Chai chai1("lemon tea", 4,{"milk", "suagr", "boba", "tealeafs", "ice"} );
//     chai1.chaidetailes();

// }

//copy constructor
#include<iostream>
#include<vector>
using namespace std;

class teacher{
    public:
    string name;
    string subject;
    int age ;
    vector<int> periods ;

   //parameterized constructor
    teacher(string name, string subject, int age, vector<int> periods){
         cout<<"parama constructor is called"<< endl; 
        this->name = name;
        this->subject = subject;
        this->age = age;
        this->periods = periods;
    }
    //copy constructor
    teacher(teacher &obj){
        cout<<"copy constructor is called"<< endl;
        this->name = obj.name;
        this->subject = obj.subject;
        this->age= obj.age;
        this->periods = obj.periods;
    }

    void teacherdetail(){
        cout<< "name of teacher: " << name << endl;
        cout<< "subject: " << subject << endl;
        cout<< "age of teacher: " << age << endl;
        cout<< "no of periods: ";
        for(int period: periods){
            cout<< period <<" ";
        }

    }
};

int main(){
    teacher t1("lema", "maths", 49, {2,4,5});
    teacher t2(t1);
    t2.teacherdetail();
        

}