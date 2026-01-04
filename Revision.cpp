#include <iostream>
using namespace std;

int pow(int a, int b){
    int ans = 1;
    if (b==0){
        return 1;
    }
    for (int i = 0 ; i < b; i++){

      ans *= a;
        
    }
    return ans;
}
int main(){

    int answer = pow(3,4);
    cout << answer;


}