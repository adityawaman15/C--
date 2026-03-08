#include <iostream>
using namespace std;

bool sort(int arr[], int idx = 0){
    if(idx == sizeof(arr)/sizeof(arr[0]) ){
        return true;
    }

    return arr[idx+1] > arr[idx] && sort(arr,idx +1);


}

int main(){
    int arr[] = {8,9,23,24,46,56,76,87,86};
    int ans = sort(arr);
    cout << ans;
}