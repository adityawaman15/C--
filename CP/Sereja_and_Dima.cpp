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

    int a= 0;
    int b = 0;
    bool flag =1;
    while(i<=j){

        if(arr[i] > arr[j]){
  
            
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

            if(flag){
                a += arr[j];
                flag = !flag;
            }
            else{
                b += arr[j];
                flag = !flag;
            }
            j--;
        }
    }

    cout << a << " "<< b << "\n";


}