#include <iostream>
using namespace std;

void say(int n){
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout << arr[n]<< endl;
}

void spell(int n){
    if(n==0){
        return;
    }
    say(n%10);
    spell(n/10);

}
int main(){
    int n = 416;
    spell(416);
}