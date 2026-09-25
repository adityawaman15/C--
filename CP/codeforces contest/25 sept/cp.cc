#include <bits/stdc++.h>
using namespace std;

int palindrome(string s, char ch){
    int i = 0;
    int j = s.length()-1;
    int coins = 0;

    while(i<j){
        if(s[i] != s[j]){

            
            if(s[i] != ch){
                coins++;
            }
            if(s[j] != ch){
                coins++;
            }  
        }
        i++;j--;
    }

    return coins;

}

int main() {
    int t;
    cin >> t;


    while(t--){
        int n;
        char c;
        string s;

        cin >> n >> c;

        cin >> s;
       

        cout << palindrome(s,c) << "\n";


    }


}