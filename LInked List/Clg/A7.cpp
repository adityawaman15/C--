#include <iostream>
#include <stack>
#include <string>
using namespace std;
int prec(char c) {
 if (c == '^')
 return 3;
 else if (c == '/' || c == '*')
 return 2;
 else if (c == '+' || c == '-')
 return 1;
 else
 return -1;
}
string infix_to_postfix(string infix) {
 stack<char> s1;
 string postfix = "";
 for (int i = 0; i < infix.length(); i++) {
 char c = infix[i];
 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <=
'9')) {
 postfix += c;
 }
 else if (c == '(') {
 s1.push(c);
 }
 else if (c == ')') {
 while (!s1.empty() && s1.top() != '(') {
 postfix += s1.top();
 s1.pop();
 }
 if (!s1.empty()) {
 s1.pop();
 }
 }
 else {
 while (!s1.empty() && prec(c) <= prec(s1.top())) {
 postfix += s1.top();
 s1.pop();
 }
 s1.push(c);
 }
 }
 while (!s1.empty()) {
 postfix += s1.top();
 s1.pop();
 }
 return postfix;
}
string reverse_string(string s) {
 string rev = "";
 for (int i = s.length() - 1; i >= 0; i--) {
 rev += s[i];
 }
 return rev;
}
string infix_to_prefix(string infix) {
 string rev = reverse_string(infix);
 for (int i = 0; i < rev.length(); i++) {
 if (rev[i] == '(')
 rev[i] = ')';
 else if (rev[i] == ')')
 rev[i] = '(';
 }
 string postfix = infix_to_postfix(rev);
 return reverse_string(postfix);
}
int main() {
 int ch;
 string str = "";
 do {
 cout << "\n menu \n";
 cout << "1. Read infix Expression \n";
 cout << "2. InFix to PostFix\n";
 cout << "3. InFix to PreFix \n";
 cout << "4. Exit \n";
 cout << "\n Enter your choice \n";
 cin >> ch;
 switch (ch) {
 case 1:
 cout << "Enter your string : ";
 cin >> str;
 break;
 case 2:
 cout << "InFix to PostFix : " << infix_to_postfix(str) << endl <<
endl;
 break;
 case 3:
 cout << "InFix to PreFix : " << infix_to_prefix(str) << endl <<
endl;
 break;
 case 4:
 cout << "Exiting";
 break;
 default:
 cout << "\n\ninvalid input\n\n";
 }
 } while (ch != 4);
 return 0;
}
/* Output

menu
1. Read infix Expression
2. InFix to PostFix
3. InFix to PreFix
4. Exit
Enter your choice
1
Enter your string : a-b-c
menu
1. Read infix Expression
2. InFix to PostFix
3. InFix to PreFix
4. Exit
Enter your choice
2
InFix to PostFix : ab-cmenu
1. Read infix Expression
2. InFix to PostFix
3. InFix to PreFix
4. Exit
Enter your choice
3
InFix to PreFix : -a-bc
menu
1. Read infix Expression
2. InFix to PostFix
3. InFix to PreFix
4. Exit
Enter your choice
4
Exiting

*/
