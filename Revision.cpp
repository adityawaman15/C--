#include <iostream>
using namespace std;

int main(){
  cout << "Enter | ";
  int a ;
  int temp;
  cin >> a;

  while (a>0){
    a = temp;
    while (temp > 0){
    cout << "*";
    temp -=1;}
    a-=1;
  }
}