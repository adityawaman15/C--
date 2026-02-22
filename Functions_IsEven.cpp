#include <iostream>
using namespace std;

int CheckEven(int num){

    switch(num){
        default:;

        case 1: if(num%2 == 0){

            return true;

        }
        else{
            return false;
        }break;
    }
}

int main(){

    int seven = CheckEven(7);
    int eight = CheckEven(8);

    cout << seven << endl << eight << endl;
}