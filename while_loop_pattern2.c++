#include <iostream>
using namespace std;

int main(){

    int a; 

    cout << "Enter you nummber |";
    cin >> a;

    int temp = a;
    int i = a;

    while (temp> 0){
        
        

        while (i<=a){

            cout << "*";
            i = i + 1;

        }
        cout << endl;
        temp = temp - 1;
        i = temp;



    }
}