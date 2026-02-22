#include <iostream>
using namespace std;

// Making a function

// int power means the return answer should be integer
int power(int a, int b){

    int ans = 1;

    for (int i = 1; i<=b; i++){
        ans = ans*a;
    }

    return ans;
}

int main(){
// Function is a well defined task
// Input -> Function -> Output

int answer = power(2,8);
cout << answer << endl;



}