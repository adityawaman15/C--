#include <iostream>
using namespace std;

int main() {

    int a = 0;
    int b = 1;

    int n = 10;

    cout << a << "\t" << b << "\t";

    for (int i = 1; i<=n/2; i++){

        int sum_1 = a + b;
        cout << sum_1 << "\t" ;
        a = sum_1;
        int sum_2 = a+ b;
        b = sum_2;
        cout << sum_2 << "\t"  ;

    }
}