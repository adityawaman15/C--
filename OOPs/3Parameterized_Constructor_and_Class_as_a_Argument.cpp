#include <iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    int lvl;

    Hero(){
        cout << "Contructor Called!"<< endl;
    }

    Hero(int health, int lvl){
        //'this' is a pointer that points towards the class variable health, level
        this->health = health;
        this->lvl = lvl;
    }

};

int main(){
    Hero Ramesh;
}