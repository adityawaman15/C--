#include <iostream>
using namespace std;

void sort(int *arr, int size){
    if(size <= 1){
        return;
    }

    if(arr[1]< arr[0]){
        swap(arr[1],arr[0]);
    }

    sort(arr +1, size -1);
}

int main(){
    int arr[10] = {1,5,6,7,9,2,34,34,32,13};
    sort(arr,10);
    for(int i:arr){
        cout << arr[i]<< endl;
    }
 }