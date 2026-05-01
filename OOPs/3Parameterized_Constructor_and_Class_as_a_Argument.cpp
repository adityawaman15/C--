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

    print(){
        cout << "Player Details-----" << endl;
        cout << "Health = " << health<< endl;
        cout << "Level = " << lvl << endl;
    }

};

int main(){
    Hero Ramesh(3424,12);
    Ramesh.print();
}