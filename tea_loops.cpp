#include<iostream>
#include<string>
using namespace std;;
int main(){
    string teatypes[5] = {"ice tea", "boba tea", "lemon tea", "milk tea", "green tea"};
    for(int i = 1; i < 5; i++){
        for(int j=1; j<=3; j++){
            cout<< "brewing " << j << " cup of " <<teatypes[i] << "...." <<endl;
            
        }

    }
    return 0;
}