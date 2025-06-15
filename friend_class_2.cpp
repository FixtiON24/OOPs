#include<iostream>
using namespace std;

class bad{
    private:
    string name;
    int age;

    bad(){
        cout<< "constructor is called"<< endl;
    }
    ~bad(){
        cout << "dis is called"<< endl;
    }

    //friend class declaration
    friend class badass;
};

//defination of friend class
class badass :public bad{
    public:
    string fup;
    badass(){
        cout << "friend class constructor is called "<< endl;
        name = "1uv";
        age = 00;
    }
    ~badass(){
        cout << "badass dis is called"<< endl;
    }

    void displaylifefup(){
        cout<< name << endl;
        cout<< age << endl;
        cout<< fup << endl;
    }

};

int main(){
    badass obj1;
    obj1.fup = "feeling";
    obj1.displaylifefup();
}