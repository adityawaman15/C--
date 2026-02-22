#include <iostream>
using namespace std;

int main(){

    int num = 7;
    int count = 0;

    

    while (num!=0){

        num = (num<<1);

        if (num<0){

            count += 1;

        }
    }

    cout << count << endl;

}