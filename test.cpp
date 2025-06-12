#include <iostream>
using namespace std;

class Animal {
public:
    virtual void soundss()=0; // pure virtual function because of that this class is abstract class and we can create more virtrual function.

    //and this method is abstarcted.
    void sound(){
        soundss();
    }
};

//dervied class from virtual class
class Dog : public Animal {
public:
    void soundss()override{
        cout << "Dog barks" << endl;
    }
};

//dervied class from abstract class
class Cat : public Animal {
public:
    void soundss()override{
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d1;
    Cat c1;
    d1.sound(); // here we didn't define the sound function is the derived class but we still manage to call that function because that sound function is in abstract class .
    c1.sound();

    return 0;
}
