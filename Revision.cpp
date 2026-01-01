#include <iostream>
using namespace std;

int main(){
  cout << "Enter | ";
  int a ;
  int temp = a;
  int b = a;
  cin >> a;

  while (b>0){
    temp = a;
    while (temp < b){
    cout << temp << " ";
    temp +=1;}
    cout << endl;
    a-=1;
    b-=1;
  }
}