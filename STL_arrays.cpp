#include <iostream>
#include <array>
//STL array
using namespace std;


int main(){

    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};
    // It is a static arrray which we'll never use

    cout << a.size()<< endl;
    // .size() can only be used on #array

    cout << "Element at 2nd Index --> " << a.at(2) << endl;
    cout << "Is Array Empty or Not --> " << a.empty() << endl;
    cout << "First Element of Array --> " << a.front() << endl;
    cout << "Last Element of Array --> " << a.back() << endl;

    /*
     Conclusion:-
     i) #incldue Array is an STL array, It's static and cannot be changed which is why it isnt used in competetive programming.
     ii) #It is declared by array<int,4> x where int is a data type, 4 is the size of array and x is the variable to which it's declared.
     iii) #array.at(2) returns the array at the index 2
     iv) #array.empty() checks whethere the array is empty or not
     v) array.front() returns the initial element.
     vi) array.back() returns the last element.
     */
}