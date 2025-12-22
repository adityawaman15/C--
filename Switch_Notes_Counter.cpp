#include <iostream>
using namespace std;

int main(){

    int cash;
    cout << "Enter the Amount of Cash you got | ";
    cin >> cash;

    cout << endl;

    int Hundred,Fifty, Twenty, One;

    switch (cash){

        default:;

        case 1:Hundred = cash/100; 
               cash = cash %100;
               cout << "Hundred Rupee Note = " << Hundred <<endl;

        case 2: Fifty = cash/50;
                cash = cash %50;
                cout << "Fifty Rupee Note = " <<Fifty << endl;
        
        case 3: Twenty = cash/20;
                cash = cash %20;
                cout << "Twenty Rupee Note = " << Twenty << endl;
        
        case 4: One = cash;
                cout << "One Rupee Coin = " << One << endl;break;




        

               



    }
}