#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    int lvl;
    string name;
    static int Timetocomplete;
    //It contains a single memory throught all objects in a class;
    //You dont need to create object to access it.
    //You can make static functions but only have acces to static datatypes you created;

    Hero(int health, int lvl, string name){
        cout << "Constructor called" << endl;

        this->health = health;
        this->lvl = lvl;
        this->name = name;
    }

    void print(){
        cout << "Player Details-----" << endl;
        cout << "Health = " << health << endl;
        cout << "Level = " << lvl << endl;
        cout << "Name = " << name << endl;
    }

    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

int Hero::Timetocomplete=5;

int main(){

    Hero Aditya(1242,12,"Aditya");
    Aditya.print();
    Aditya.Timetocomplete = 10;
 //Destructor is called automatically in Static.
    Hero* Saish = new Hero(123,4,"Saish");
    //value of both changes because timetocomplete is static and holds same memory;
    cout << Aditya.Timetocomplete << " and " << Saish->Timetocomplete<< endl;


    delete Saish;

    return 0;
}