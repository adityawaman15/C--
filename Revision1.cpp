#include <iostream>
using namespace std;


int f(int n){

    cout << "f {" << n<<"}stack loaded" << endl;

    if(n>1){
        f(n-1);
        f(n-1);
    }

    cout << "f {"<< n << "} stack removed" << endl;

}

int main(){
    int n =5;
    f(n);

}