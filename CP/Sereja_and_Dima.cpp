#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin >> n;
    
    vector<int> arr (n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int i = 0;
    int j = n-1;

    int a;
    int b;
    bool flag =1;
    while(i<j){
        if(arr[i] > arr[j]){
            cout << arr[i] << " ";
            if(flag){
                a += arr[i];
                flag = !flag;
            }
            else{
                b+= arr[i];
                flag = !flag;
            }
            i++;
        }
        else{
            cout << arr[j] << " ";
            if(flag){
                b += arr[j];
                flag = !flag;
            }
            else{
                a += arr[j];
                flag = !flag;
            }
            j--;
        }
    }

    cout << a << " "<< b << "\n";

    // 4 4 1 2 10

}