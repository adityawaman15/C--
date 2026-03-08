#include <iostream>
using namespace std;

int fibo(int n){

    if(n == 1 || n == 0 ){
        return n;
    }

    int value_1 = fibo(n-1);
    int value_2 = fibo(n-2);

    return  value_1 + value_2;


}

int main(){
    cout << fibo(12);
}