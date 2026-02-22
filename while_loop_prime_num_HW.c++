#include <iostream>
using namespace std;

int main(){

    int a ;
    cout << "Enter your Number | ";
    cin >> a;

    int half = a/2  + 1;
    int i = 1;

    cout << half << endl;

    while (i <= half){

        if (half%i == 0){


            cout << "Not Prime" << endl;
        }
        i = i +1 ;

        
    };





}