#include <iostream>
using namespace std;


class Hero(){
    private:
    int health;
    int level;
    public:

    Hero(){
        cout <<"Constructor called" << endl;

    }

    int get_health(){
        return health;

    }

    int set_health(int h){
        health = h;
    }

   int  get_level(){
        return level;
    }

    int set_level(int lvl){
        level = lvl;
    }

    void print(){
        cout << "Health = "<< health << endl << "level = "<< level << endl;

    }


}
int main(){

    Hero Aditya();

    Hero *b = new Hero();

    Aditya.set_health(100);
    Aditya.set_level(4);
    b.set_health(200);
    b.set_level(6);


    Aditya.print();
    b.print();
    

}