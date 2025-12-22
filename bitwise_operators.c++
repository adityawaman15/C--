// Bitwise Operators
#include <iostream>
using namespace std;

int main(){



 int a = 2;
 int b = 3;

 cout << (2&3) << endl;
 cout << (2 | 3) << endl;
 cout << ~2 << endl;
 cout << (2^3) << endl;


 //Left shift and right shift

 cout << "Right Shift of 2 once | " << (2>>1) << endl;
 cout << "Right Shift of 8 twice | " << (8>>2) << endl;
 cout << "Left shift of 2 twice | " << (2<<2) << endl;
 cout << "Left shift of 8 thrice | " << (8<<3) << endl;

 // Although if you left shift a bigger number, it'll become negative becuase the first byte will become 1

 /*
 We can write i = i + 1, as i++ or ++i,or i += 1*/

}