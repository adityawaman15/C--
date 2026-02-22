#include <iostream>
using namespace std;

int main(){

    int a = 123;

    cout<< a << endl;

    char b = 'a';

    cout << b << endl;

    bool c = true;

    cout << c << endl;

    cout << a << b << c << endl;

    float f = 1.234;
    cout << f << endl;

    double d =  1.235;
    cout << d << endl;

   cout << "size of a (int) :" << sizeof(a) <<endl << "size of b (char (single)) :" << sizeof(b) << endl
   << "size of c (boolean) :" << sizeof(c) << endl << "size of d (double) " << sizeof(d) << endl << "size of f (float)" << sizeof(f) << endl;


   int x = 'b';

   cout << x << endl;
   /* this will give the ASCII code of b */
   /* let's try something opposite of that*/

   char y = 97;
   cout << y << endl;

   /* here we pasted the ascii code of a as "97" and got a as the output*/\


   /* now we'll see unsigned int , it converts negative int bits to 2nd complimentary, and the number becomes very big*/

   unsigned int NEGATIVE = -1231;

   cout << NEGATIVE << endl;

   /* if you devide int by int, you'll get int*/
   /*if you divide float by int, you'll get float, same for double*/

   float num = 2.0/5;
   int num1 = 2/5;
   double num2 = 2.00/5;

   cout << num << " " << num1 << " " << num2 << endl;





}