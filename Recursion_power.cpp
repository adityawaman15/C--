#include <iostream>
using namespace std;

int power(int pow){
    if(pow==0){
        return 1;
    }

    return 2*power(pow-1);


}

int main(){
    int ans = power(5);
    cout << ans << endl;
}

