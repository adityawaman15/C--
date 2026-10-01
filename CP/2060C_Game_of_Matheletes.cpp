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
                if(arr[j] == -1){
                    continue;

                }
                if((arr[j] + arr[i]) == k){
                    score++;
                    arr[i] = arr[j] = -1;
                    break;
                      }                

            }

        }

            cout << score << "\n";

    }
    //4 4 4 1 2 3 2 8 15 1 2 3 4 5 6 7 8 6 1 1 1 1 1 1 1 16 9 3 1 4 1 5 9 2 6 5 3 5 8 9 7 9 3

}