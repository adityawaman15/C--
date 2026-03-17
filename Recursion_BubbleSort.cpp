#include <iostream>
using namespace std;

void sort(int *arr, int size){
    if(size <=1){
        return;
    }

    for(int i = 0; i < size-1;i++){
        if(arr[1]< arr[0]){
            swap(arr[1],arr[0]);
        }
    }
    sort(arr,size-1);

}

int main(){
int arr[10] = {5,2,3,5,1,23,54,12,34,23};
sort(arr,10);
for(int i:arr){
    cout << arr[i] << " ";
}

}