#include <iostream>
using namespace std;

bool sort(int arr[], int size){

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[size-1] < arr[size]){
        return sort(arr, size-1);
    }
    else{
        return false;
    }
}

int main(){

    int arr[9] = {8,9,23,24,46,56,76,87,86};

    int ans = sort(arr,8);

    cout << ans << endl;
}