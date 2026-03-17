#include <iostream>
using namespace std;

void isSorted(int *arr,int size){

    if(size == 0 || size == 1){
        return true;
    }

    cout << arr[0];

    isSorted(arr +1, size -1);
}