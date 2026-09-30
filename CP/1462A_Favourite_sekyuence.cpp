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
        int i =0;
        int j = n-1;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        int ans[n];
        int cnt = 0;
        while(i<=j){
            ans[cnt] = arr[i];
            i++;
            cnt++;
            if(cnt < n){
            ans[cnt] = arr[j];}
            j--;
            cnt++;

        }


    }
        
        //1 7 3 4 5 2 9 1 1


    
    }
;