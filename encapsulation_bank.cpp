#include<iostream>
using namespace std;
class bank{
    private:
    string accno;
    double balance;
    public:
    //constructor for bankacc making
    bank(string accno, double balance){
        this->balance = balance;
        this->accno = accno;
    }
    // getter for accessing the balance nothing else and using const so that it can't be change
    void getbalance()const{
        cout<< "balance: "<< balance<<endl;
    }
    //deposite money
    void deposite(double amount){
        if(amount > 0 ){
        balance += amount;
        cout<<"deposite: "<< amount<< endl;
        }else{
        cout<< "invalid entry"<< endl;
    }
}
//withdraw from the account
    void withdraw(double amount){
        if(amount > 0 && amount <= balance ){
        balance -= amount ;
        cout<<"withdrawn amount: "<< amount<<endl<< "balance now: "<< balance <<endl;
        }else{
        cout << "invalid entry" << endl;
    }
}
};

int main(){
    bank b1("123qwe", 400000);
    b1.deposite(5000);
    b1.getbalance();
    b1.withdraw(100000);
    b1.getbalance();
    

}