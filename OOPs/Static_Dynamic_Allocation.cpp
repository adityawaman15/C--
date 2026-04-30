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
    Hero One;
    One.set_health(2000);
    One.set_lvl(12);
    One.set_name();

    cout << "Hero (1) Name: " << One.name << "\nHero(1) Level: "<< One.level << "\nHero(1) Health: "<< One.get_health() << endl;


}
