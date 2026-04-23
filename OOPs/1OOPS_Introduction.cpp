// Size of an empty class is 1 byte
// Clsases from other c programs can be included usuing #include "file_name
// There are 3 types of data member: public, private and protected

//Public can be accesed inside and outside of class
//Private can be accessed only inside the class

// Setter and Getter are elements used to access private members

#include <iostream>
using namespace std;

int main(){

    int x = 10;

    void add( int h){
    x = h + 10;
    }
    cout << x << endl;
}