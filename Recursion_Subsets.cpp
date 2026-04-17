//Check leetcode for problem and video for explaination


//Using bitwise to solve the questions
#include <iostream>
using namespace std;

int main() {
    string str = "abc";
    int n = str.length();

    // loop from 0 to 2^n - 1
    for (int num = 0; num < (1 << n); num++) {

        string output = "";

        for (int i = 0; i < n; i++) {

            // check if ith bit is ON
            if (num & (1 << i)) {
                output += str[i];
            }
        }

        cout << output << endl;
    }
}