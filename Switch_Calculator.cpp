#include <iostream>
using namespace std;

int main (){

    int i = 1;

 while ( i != 0){

    int a, b;

    cout << "Enter your first Number | " ;
    cin >> a;
    cout << "Enter your second Number | ";

    cin >>b;

    cout << endl<< endl;

    cout << "What would you like to do with these numbers?"<< endl;
    cout << "Write + to Add" << endl;
    cout << "Write - to Subtract" << endl;
    cout << "Write * to Multiply" << endl;
    cout << "Write / to Divide" << endl;

    char c;
    cout << " Enter Sign | ";
    cin >> c;

    switch (c){

        case '+': cout << (a+b) << endl;break;
        case '-': cout << (a-b) << endl;break;
        case '*': cout << (a*b) << endl;break;
        case '/': cout << (a/b) << endl;break;

    }

    string d;
    cout << "Exit? Y/N";
    cin >> d;
     
    if (d == "Y"){
        i = 0;
     }

    }
}