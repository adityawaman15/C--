#include<iostream>
#include <math.h>
using namespace std;

int main(){

    int a = 5;
    int ans = 0;
    int count = 0;

    while(a!=0){

        
        int bit = a&1;

        ans = ans + pow(2,count);
        a = a>>1;

        count *= 10;}        
        
    cout << ans << endl;



}