#include <iostream>
using namespace std;

int count(int n){

    
    if(n==0){
        return 0;
    }
    cout << n << endl;
    
    return count(n-1);
}

int main(){
    int ans = count(10);
    cout << ans<< endl;

}
