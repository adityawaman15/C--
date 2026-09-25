#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;




    while(t--){
        int n;
        cin >> n;

        int arr[n];

        map<int,int,greater<int>> count;
        int max_count = 0;

        

        for(int i = 0; i<n;i++){
            cin >> arr[i];
            count[arr[i]]++;
            if(count[arr[i]] > max_count){
                max_count++;
            }
        }

       vector<vector<int>> ans;

       for(int i = 0; i <max_count;i++){
        int curr_count = i+1;
        for(auto j:count){
            if(j.second >= curr_count){
                cout << j.first << " ";
            }
        }

       }


    }


}