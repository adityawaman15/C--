#include <iostream>
using namespace std;

int main(){

  int a = 2;
  int b = 2;

  bool first = (a==b);
  bool second = (a>=b);
  bool third = (a<b);

  bool last = (a!=b);

  cout << first << " "<< second <<" "<< third << " " << last << endl;

}