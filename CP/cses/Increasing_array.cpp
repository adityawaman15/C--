    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        long long n;
        cin >> n;
        int arr[n];

        long long count = 0;
        cin >> arr[0];

        for(int i = 1; i < n; i++){

            cin >> arr[i]; 
            count += arr[i] - arr[i-1] -1;
 
        }

        cout << count;
    ;




        //5 3 2 5 1 7

    }