#include<iostream>
#include<string>
using namespace std;
abstract class wow{
    public:
    int x = 0;
    string anything;

    void calling(){
        cout<<"i am calling because of abstract class"<<endl;
    }
};

class abc : public wow{
    public:
    int v;
    string everthing;
    void abccalling(){
        cout<<"i am calling because of abstract class"<<endl;
    }
};

int main(){
    abc obj1;
    obj1.calling();

}