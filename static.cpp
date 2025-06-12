#include <iostream>
using namespace std;
class random{
   public:
   random(){
       cout<< " construcot called"<< endl;
   }
   ~random(){
       cout<< " destructor called"<< endl;
   }
};
int main() {
    {
    static random obj1;
    };
    cout<< "end of program"<<endl;
    return 0;
}