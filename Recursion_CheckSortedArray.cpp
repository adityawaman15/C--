#include <iostream>
using namespace std;

bool sort(int arr[], int size){

    if(size == 0){
        return true;
    }

    bool ans = arr[size-1]<arr[size] ? 1:0;
    if(ans == 0){
        return false;
    }
    return sort(arr,size-1);
    

}

int main(){
    int arr[9] = {8,9,23,24,46,56,76,87,86};
    int ans = sort(arr,8);
    cout << ans << endl;

}