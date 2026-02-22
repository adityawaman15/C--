#include <iostream>
using namespace std;

void printArray (int arr[], int size){

    //Printing an array 

 for (int i = 0; i<size; i++){
    cout << "Indice | " << i << " | " <<arr[i] << endl; 
 }

} 

int main(){

//declaring and initialize an array of size 3 with values 5,7 and 11.

int second[3] = {5,7,11};

//Indices 0,1,2 will be formed

cout << "Value of Index at indice 2 =  " << second[2] << endl;




int fourth [10] = {0};
// Declares an array of size 10.
// Using {0} initializes the first element as 0, and all remaining elements default to 0 as well

//printing array 
 printArray(second, 3);






int SecondSize = sizeof(second);
cout << "Size of Second | " << SecondSize<< endl;

// Size of one indice of integer = 4;
// Therefore Size of second = 4*3
  
char ch[5] = {'a', 'b','c', 'd','e'}

// Declaring an array of data type char of size 5

;
//Initializng it;

cout << ch [3] << endl;

}

//If you make changes in another function in arrays, the changes occur in main() too.