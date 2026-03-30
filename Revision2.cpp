#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter | ";
    cin >> n;

    if(n <=1){
        cout << n;
    }
    else{
        for(int a = 0,b = 1, c = 1,i=0; i<=n-2; i++){
            a = b; 
            b = c;
            c = a+b;

            cout << c << endl;
        }
    }
}