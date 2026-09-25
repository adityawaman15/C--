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

        }

       vector<vector<int>> ans;


       for(auto k:count){
        int max_count = k.second;
        for(int l = 0; l < max_count;l++){
            cout << k.first << " ";
            k.second--;
        }
        
       for(int i = 0; i <max_count;i++){
        int curr_count = max_count;
        for(auto j:count){
            if(j.second >= curr_count){
                cout << j.first << " ";
                j.second--;
            }
        }


       }
    }


    }


}