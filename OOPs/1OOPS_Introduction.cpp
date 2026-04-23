// Size of an empty class is 1 byte
// Clsases from other c programs can be included usuing #include "file_name
// There are 3 types of data member: public, private and protected

//Public can be accesed inside and outside of class
//Private can be accessed only inside the class

// Setter and Getter are elements used to access private members

// Whn you create an Object, Constructor is called. What is Constructor?

#include <iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char Name[100];
    int level;

    int getHealth(int h){
        return health;
    }
    int setHealth(int h){
        health = h;
    }
    int getLevel(int h){
        return level;
    }
    int getHealth(int h){
        level = h;
    }


}

int main(){
    hero Aditya;
    sizeof(Aditya);
}