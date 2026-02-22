#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int ans = 0;
    int count = 0;



    while (x!=0){
        int bit = x&1;

        if (bit == 0){

            ans = ans + pow(2,count);

        }
    
        count += 1;

        x = (x>>1);
    }

   return ans;

}