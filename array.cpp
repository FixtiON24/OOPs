// #include<iostream>
// using namespace std;
// int main(){
//     int chaitemp[6] ={12, 23, 34, 45, 56, 67};
//     for(int i=0; i<=5; i++){
//         cout<< "temp of tea is : "<< chaitemp[i] << " degre cel" << endl;
//     }
// }/

#include<iostream>
using namespace std;

int totalchaiserved(int chai[], int size){
    int total =0;
    for(int i=0; i<size; i++){
        total+=chai[i];
    }
    return total;
}

int main(){
    int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75};
    cout<< "total chai served in this week: "<< totalchaiserved(chaiServed, 7) <<endl;
    return 0;
}