#include <iostream>
using namespace std;

bool sort(int arr[], int size){

    if(size == 0){
        return ans;
    }

    bool ans = return arr[size-1]<arr[size] ? 1:0;
    sort(arr,size-1);

}

int main(){
    int arr[9] = {8,9,23,24,46,56,76,87,89};
    int ans = sort(arr,8);
    cout << ans << endl;

}