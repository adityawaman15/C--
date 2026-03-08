#include <iostream>
using namespace std;

void ReachHome(int src, int dest){

    if(src == dest){
        cout << "Pahuch Gaye"<< endl;
        return;
    }

    cout << "Source | "<< src << "\tDestination | "<< dest<< endl;
    ReachHome(src +1,dest);
}

int main(){
    int src = 1;
    int dest = 10;

    ReachHome(src,dest);
}