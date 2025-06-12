// #include <iostream>
// using namespace std;

// void pourChai(int &cups) { //The & means it receives a reference to the original variable (not a copy).
//     cups = cups + 5;  // Adds 5 cups
//     cout << "Poured cups: " << cups << endl;
// }

// int main() {
//     int cups = 2; //This is the original value of cups in main().
//     pourChai(cups);   // Passes 'cups' by reference
//     cout << "Total cups are " << cups << endl;
//     return 0;
// }


//pass by refrence using pointer
// #include <iostream>
// using namespace std;

// void pourChai(int* ptr) { //The int* ptr is the pointer that store the address of integre variable
//     *ptr += 5;  // Adds 5 cups to the variable that is stored at this address
//     cout << "Poured cups: " << *ptr << endl;
// }

// int main() {
//     int cups = 2; //This is the original value of cups in main().
//     pourChai(&cups);   // Passes 'cups' address to pourChai
//     cout << "Total cups are " << cups << endl;
//     return 0;
// }

//pass by alias
#include <iostream>
using namespace std;

void pourChai(int &b) { //its a same like above one where we use a directly with & this sign
    b += 5; 
    cout << "Poured cups: " << b << endl;
}

int main() {
    int cups = 2; //This is the original value of cups in main()
    pourChai(cups);   
    cout << "Total cups are " << cups << endl;
    return 0;
}

