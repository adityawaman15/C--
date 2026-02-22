#include <iostream>
using namespace std;

int main(){

    int a;
    cout <<"Enter you number | " << endl;
    cin >> a ;
 

    int temp = a;

    while (temp >= 1){
      int i = temp;
      int j = temp;  
      while (i >= 1){

        int j = temp;

        while ( j >= 1){

         
         cout << "*" ;
         j = j - 1;}

    
        cout << endl;
        i = i - 1;  }        
      temp  = temp - 1; 
      cout << "\n";
    }

                  
}                