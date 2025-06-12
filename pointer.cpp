#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* ptr= &a;
    int** abc= &ptr;
    int*** bca= &abc;
    cout<< &a << endl;
    cout<< ptr << endl;
    cout<< abc << endl;
    cout<< &ptr << endl;
    cout<< &abc << endl;
    cout<< bca << endl;

    cout<< *(&a) <<endl; // derefrence operator
    cout<< *(ptr) <<endl; // is printing the value stored at the memory address that ptr is pointing to.
    cout<< *(abc)<< endl;
    cout<< **(abc)<< endl; // double derefrence 
    cout<< ***(bca)<< endl; // triple derefrence 
}
