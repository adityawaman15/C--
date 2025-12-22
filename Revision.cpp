#include <iostream>
using namespace std;

int main(){
    int num;
    int a = 1;
    int b = 1;
    int c = 1;

    cout << "Enter a number | ";
    cin >> num;
 while(c<= num){
  while(b<=num){
    while (a<=num){
        cout << "*";
        a+=1;
    }
    cout << endl;
      b+=1;
      a=1;}
      cout << endl;
      b = 1;
      c+=1;
    num -=1;}
    
}