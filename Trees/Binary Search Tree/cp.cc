#include <bits/stdc++.h>
using namespace std;

void palindrome(string s, char ch, int & coins){
    int i = 0;
    int j = s.length();

    while(i<j){
        if(s[i] != s[j]){
            if(s[i] != ch){
                s[i] = ch;
                coins++;
            }
            if(s[j] != ch){
                s[j] = ch;
                coins++;
            }  
        }
        i++;j--;
    }

}

int main() {
    int t;
    cin >> t;


    while(t--){
        int n;
        char c;
        string s;
        int coins = 0;

        cin >> n >> c;

        for(int i = 0; i<n;i++){
            cin >> s[i];
        }
        palindrome(s,c,coins);

        cout << coins << "\n";


    }


}