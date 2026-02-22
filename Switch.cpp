#include <iostream>
using namespace std;

int main(){

    int ch = 3;

    // Switch

    switch (ch){

        case 1: cout << "Number 1"<< endl;break;

        //Use break or the rest of the cases will get executed too
    

        case 2: cout << "Number 2" << endl;break;

        default: cout << "Default case " << endl;
    }
} 