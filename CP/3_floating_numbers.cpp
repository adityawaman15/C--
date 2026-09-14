#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // programs need to be written as fast as possible, that is why typedef is used to shorten the datatypes
    typedef double d;

    typedef vector<int> vi;
    typedef pair<int,int> pi;



    d x = 0.3*3;

    d y = 0.9;
    /*A difficulty when using floating point numbers is that some numbers cannot
be represented accurately as floating point numbers, and there will be rounding
errors. For example, the result of the following code is surprising:
*/
    printf("%.20f \n", x);
    printf("%.20f \n", y);

    //abs = absolute value
    //1e-9 = 1* 10^-9
    //3e-19 = 3 & 10^-19

    if(abs(x-y) < 1e-9){
        cout << "x and y are same";
    }
    else{
        cout << "they are not same";
    }


}