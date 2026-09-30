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
        int i =1;
        int j = n-1;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        while(i<j){
            swap(arr[i],arr[j]);
            i++;
        }

        
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

        cout << "\n";

    }
        
        //1 7 3 4 5 2 9 1 1


    
    }
;