#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    
    if(a>b){
        while( a != 0 && b!= 0){
        int temp = b;
        b = a -b;
        a = temp;
        }
    }
    else{
        while( a != 0 && b!= 0){
        
        int temp = a;
        a = b-a;
        b = temp;

        }
    }

    if(a == 0){
        return b;
    }
    else{
        return a;
    }

}


int main() {
    int t;
    cin >> t;
    /*
    while(t--){
        int n, x;
        cin >> n >> x;

        int arr[n];

        if( arr[i] >0, (arr[i],x) != 1 ){

        }



    }*/


    cout << GCD(27,18);


}