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
            count[k.first]--;
        }
        
       
        for(auto j:count){
            for(int i = 0; i < max_count;i++){
            if(j.second >= 1){
                cout << j.first << " ";
                count[j.first]--;
            }
            else{
                break;
            }
        }
        }


       }

       cout << "\n";
    }


    }


