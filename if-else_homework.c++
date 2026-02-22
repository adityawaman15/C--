#include <iostream>
using namespace std;

int main(){
    char a;
    cout << "Enter a character | ";
    cin >> a;

    int b = a;
    
    if ( b>= 65 && b<= 90 ){
        cout << "The enetered character is a upper case";

    }
    else if (b>= 97 && b<= 122){
        cout << "The enetered character is a lowercase";

    }
    else if (b>= 48 &&  b <=57){
        cout << "The enetered character is a number";
    }

    
}

