#include <iostream>
using namespace std;

int sum(int arr[], int size){
    if(size == 0 || size == 1){
        return arr[0];
    }

    return arr[0] + sum(arr + 1, size -1);
}