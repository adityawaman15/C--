#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    cin >> n;

    if(n < 5){
        cout << "NO SOLUTION";
    }
    else{
        int i = 1;
        int j = 4;
        while(j<=n){
            cout << i << " ";
            cout << j << " ";
            i++;
            j++;
        }
        if(n%2){
            cout << i;
        }
    }


}