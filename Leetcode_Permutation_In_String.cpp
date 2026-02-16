#include <iostream>
using namespace std;

int main(){

    string s2 = "eidbaoooo";
    int count[26] = {0};

    for (int i = 0; i< s2.length(); i++){
        count[s2[i] - 'a']++;

    }

    for(int i = 0; i<s2.length(); i++){
        cout << char(i + 'a') << " = " << count[i] << endl;

    }
    


}