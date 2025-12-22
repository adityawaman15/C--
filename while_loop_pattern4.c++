#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout << "Enter Your Number | ";
    cin >> a;

    char ch = 65;

    int i = a;
    int j = a;
    

    while (i> 0){

        j = a;


        while (j>0){

            cout<<  ch;
            j = j-1;

        }
        cout << endl;
        ch  = ch + 1;
        i = i-1;



    }

}