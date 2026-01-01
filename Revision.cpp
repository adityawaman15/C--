#include <iostream>
using namespace std;

int main(){
  cout << "Enter | ";
  int a ;
  int temp;
  cin >> a;

  while (a>0){
    temp = a;
    while (temp > 0){
    cout << temp << " ";
    temp -=1;}
    cout << endl;
    a-=1;
  }
}