#include<iostream>
using namespace std;
class qwe{
    virtual void haha(){
        cout<< "i am virtual"<< endl;
    }
};
class abc : public qwe {
    public:
    void haha(){
        cout << "lol"<< endl;
    }
};

int main(){
    abc obj1;
    obj1.haha();
}