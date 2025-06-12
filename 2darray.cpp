#include<iostream>
using namespace std;
int main(){

    int chaiorder[3][7]{
       {50, 60, 55, 70, 65, 80, 75},
       {40, 55, 60, 65, 70, 75, 80},
       {45, 50, 55, 60, 65, 70, 75}
    };
    for(int i=0; i<3; i++){
        cout<< "i am at "<< i+1 <<" shop : ";
        for(int j=0; j<7; j++){
            cout << chaiorder[i][j]<<" ";

        }
        cout<<" \n"<<endl;
    }

}