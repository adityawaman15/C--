#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<int> arr(n);
    int max_e = INT_MIN;

    for(int i = 0; i < n; i++){
        int x;
        cin >> arr[i];
        arr[i] -= i;
        cout << arr[i] << " ";
        max_e = max(max_e,arr[i]);
    }
    long long moves = 0;

    for(int i = 0; i < n;i++){
        moves += (max_e - arr[i]);
    }
    cout << moves;
;




    //5 3 2 5 1 7

}