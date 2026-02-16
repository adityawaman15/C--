#include <iostream>
using namespace std;

int main(){
    string name;
    string name1;

    getline(cin,name);
    getline(cin,name1);

    compare(name,name1);
    cout << name;
}
