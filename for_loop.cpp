#include <iostream>
using namespace std;

int main (){


    int n ;
    cout << "Enter a number | " ;
    cin >> n ;

    // Loops cant be ran in 2 ways:

    // Method 1:

    // for (variable, condition (can be of any thing), increament/decreament)

    for (int i = 1 ; i <= n ; i++){

        cout << "Number | " << i << endl;

    }

    //Method 2 



    for (;;){

        if (n >= 1){

            cout << "Number | " << n << endl;

            --n;
        }
        else{

            break;
        }
    }
}