#include <iostream>
using namespace std;

int main(){
    int i = 4;
    int a = i++; // Post increament: Here a remains 4, but after naming of a, i increases. Therefore i += 1
    


    cout << a << endl;
    cout << i << endl;
    cout << a << endl;
    cout << i << endl;
    cout << a << endl;

    int sum = a + i;
    cout << sum << endl;




    int x = 7;
    int y = ++x; // Pre Increament, upon naming a variable, the number x increases first and the y = x, that is x = 8

    cout << "Value of Y | " << y << endl;
    cout << "Value of X | " << x << endl;


    

    


}