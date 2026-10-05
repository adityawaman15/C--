#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        int x;
        cin >> arr[i];
        arr[i] -= i;
    }

    int max_e = max_element(arr.begin(),arr.end());




    //5 3 2 5 1 7

}