#include <iostream>
using namespace std;

int factorial(int num){

    int ans = 1;

    for (int i = num ; i >= 1; i--){

        ans = ans * num;
        num = num - 1;
    }

    return ans;
}

int NCR(int a, int b){


    /* The formula of nCr which was thought in JEE Maths was:
    
         nCr = n!/(r! * (n - r)!)*/

    int ans;

    ans = factorial(a)/(factorial(b)*factorial(a-b));

    return ans;

         
}

int main(){

    int a, b;

    cout << "Find the NCR of N | " ;
    cin >> a;
    cout<< " and R | " ;
    cin >> b;
    cout << " is:- ";

    int ans = NCR(a,b);

    cout << ans << endl;

}