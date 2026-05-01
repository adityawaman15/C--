#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    int *lvl;
    string *name;

    Hero(int health, int lvl, string name){
        this->health = health;
        this->lvl = lvl;
        this->name=name;
    }
    
     

    

    print(){
        cout << "Player Details-----" << endl;
        cout << "Health = " << health<< endl;
        cout << "Level = " << lvl << endl;
        cout << "Name = " << name << endl;
        
    }

};

int main(){
    Hero Aditya(1242,12,"Aditya");
    Aditya.print();

    Hero Saish(Aditya);

    Aditya.lvl = 124;
    Saish.print();
    

    //So we make a variable inside the function;

}