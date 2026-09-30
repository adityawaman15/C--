#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[n];
    }

    int i = 0;
    int j = n-1;

    int a;
    int b;
    bool flag =1;
    while(i<j){
        if(arr[i] > arr[j]){
            if(flag){
                a+= arr[i];
                flag = !flag;
            }
            else{
                b+= arr[i];
                flag = !flag;
            }
        }
        else{
            if(flag){
                b+= arr[i];
                flag = !flag;
            }
            else{
                a+= arr[i];
                flag = !flag;
            }
        }
    }

    cout << a << " "<< b << "\n";

    // 4 4 1 2 10

}