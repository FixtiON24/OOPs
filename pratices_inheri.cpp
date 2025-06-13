#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Tea{
    protected:
    string teaname;
    int serving;

    public:
    Tea(string teaname, int serving){
    this->teaname =  teaname;
    this->serving = serving;
    cout << "tea construtor is called "<< teaname << endl;
    }

    virtual void brew() const{
        cout<< "brewing " << teaname << endl;
    }

    virtual void servings() const{
        cout<< "servings " << serving << " cups of tea" << endl;
    }
    virtual ~Tea(){
        cout << "destructor is called"<< endl;
    }
};

class Greentea : public Tea{
    public:
    Greentea(string name, int serving): Tea(name, serving){
        cout<< "Greentea constructor is called" <<endl;
    }
    void brew() const override{
        cout<< "brewing " << teaname << endl;
    }
    ~Greentea(){
        cout<< "green destructor called" << endl;
    }
};

class Masalatea : public Tea{
    public:
    Masalatea(string name, int serving): Tea(name, serving){
        cout<< "Masalatea constructor is called" <<endl;
    }
    void brew() const override{
        cout<< "brewing " << teaname << endl;
    }
    void servings() const override{
        cout<< "servings " << serving << " cups of tea" << endl;
    }
    ~Masalatea(){
        cout<< "masalatea destructor called" << endl;
    }
};

int main(){
    Greentea g1("green tea", 5);
    g1.brew();

    Masalatea m1("Masalatea", 6);
    m1.brew();
    m1.servings();

    // with help of pointer
    Tea* tea1= new Tea("icetea", 8); //base class pointer
    tea1->brew();
    tea1->servings();

    Greentea* tea2= new Greentea("Greentea", 8); //derived class pointer
    tea2->brew();
    tea2->servings();

    delete tea1;
    delete tea2;

    // another way with pointer
    Tea d1("normaltea", 6);
    Tea* d11 = &d1;
    d11->brew();
}