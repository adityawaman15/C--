#include <iostream>
using namespace std;

bool search(int arr[], int size, int target){
    if(size == 0){
        return 0;}
    if(arr[0] == target){
        return 1;
    }

        return search(arr + 1, size -1);

}