#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        int x;
        cin >> arr[i];
        arr[i] -= i;
    }

    for(int i = 0; i < n;i++){
        cout << arr[i] << " ";
        
    }

    //5 3 2 5 1 7

}