#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Chai{
    private:
    string teaname;
    int servings;

    public:
    Chai(string teaname, int servings){
        this->servings = servings;
        this->teaname = teaname;
    }
    ~Chai(){
        cout << "disc is called"<< endl;
    }

    void display()const {
        cout << "teaname: " << teaname <<endl;
        cout << "serve: " << servings << endl;
    }

    //friend function declaration
    friend bool compareservings(const Chai &chai1, const Chai &chai2 );
};

bool compareservings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}

int main(){
    Chai masalachai("Masala chai", 4);
    Chai gingertea("gingertea", 8);
    masalachai.display();
    gingertea.display();

    if (compareservings(masalachai, gingertea)){
    cout << "masalachai having more serving" << endl;
}
else{
        cout << "masalachai having less serving" << endl;

    }

    return 0;
    
}
