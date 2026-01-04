#include <iostream>
using namespace std;

void printArray (int arr[],int size){

    for(int i = 0; i <size; i++){
        cout << "Index "<< i << " | " << arr[i]<< endl;
    }
    
}

void inputArray (int arr[],int size){

    for(int i = 0; i <size; i++){
        cout << "Index "<< i << " | " ;
        cin >> arr[i];
        cout << endl;
    }
    
}
int main(){
    int array[10] = {0};
    cout << array[1] << endl;
    inputArray(array,10);
    cout << "The Array you entered is :- "<< endl;
    printArray(array,10);}


