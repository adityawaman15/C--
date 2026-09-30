#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    
    while(T--){
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int minus = 0;
        int i = 0;
        int j = n-1;

        while (i<j){
            if(arr[i]!= arr[j]){
                minus +=2;
            }
            else{
                break;
            }
        }

        cout << n - minus << "\n";


    }

}