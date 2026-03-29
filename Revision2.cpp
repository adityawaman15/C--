#include <iostream>
using namespace std;


string reverse(string &s){
    int a = 0;
    int b = s.length()-1;

    while(a<=b){
        swap(s[a],s[b]);
        a++;
        b--;
    }
}


int main(){

    string name = "Ich name ist Aditya.";
    
    name = reverse(name);

    cout << name << endl;

}