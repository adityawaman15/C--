#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int n,k;
        cin >> n >> k;
        int score = 0;

        int arr[n];

        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n;i++){
            if(arr[i] == -1){
                continue;
            }
            for(int j = i+1; j < n;j++){
                if((arr[j] + arr[i]) == k){
                    score++;
                    arr[i] = arr[j] = -1;
                      }                

            }

        }

            cout << score << "\n";

    }
}