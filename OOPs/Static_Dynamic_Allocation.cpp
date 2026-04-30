#include <iostream>
using namespace std;

class Hero{
    private:
     int health;
    public:
     int level;
     char name[200];

     int get_health(){
        return health;
     }
     int set_health(int h){
        health = h;
     }
     int set_lvl(int lvl){
        level = lvl;
     }
     void set_name(){
        cout << "Enter Name | ";
        cin >> name;
     }
    };

int main(){
    Hero One; // Static Allocation
    One.set_health(2000);
    One.set_lvl(12);
    One.set_name();

    cout << "Hero (1) Name: " << One.name << "\nHero(1) Level: "<< One.level << "\nHero(1) Health: "<< One.get_health() << endl;

    //Dynamic Allocation
    Hero *Two = new Hero;

    //Instead of *Two.set_health, we can use Two->set_health. Either one is correct.
    Two->set_health(4320);
    Two->set_lvl(15);
    Two->set_name();

    cout << "Hero (2) Name: " << Two->name << "\nHero(2) Level: "<< Two->level << "\nHero(2) Health: "<< Two->get_health() << endl;



}
