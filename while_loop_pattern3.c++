#include <iostream>
using namespace std;

int main(){

    int a;
    cout << "Enter you Number | ";
    cin >> a;
    int i = 0;
    int temp;

    while (a >= 0 ){

       temp = i ;

    



       while (i>0){

        cout << i << " ";

        i = i - 1;

       }

       i = temp;
       i = i + 1;

       cout << endl;
       a = a -1;
       
       

    }

}