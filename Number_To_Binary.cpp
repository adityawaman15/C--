#include<iostream>
#include <math.h>
using namespace std;

int main(){

    int a = 5;
    int ans = 0;
    int count = 1;

    while(a!=0){

        
        int bit = a&1;

        ans = ans + (bit * count);
        a = a>>1;

        count *= 10;}        
        
    cout << ans << endl;



}