#include <iostream>
using namespace std;

void Bubble_Sort( int arr[]){
    int size = sizeof(arr)/4;
    for(int i = 0; i <size-1; i++){
        bool swap = false;
        for(int j = 0; i <size -j-1; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }


}

void print(int arr[]){
    int size = sizeof(arr)/4;
    for(int i = 0; i <size ; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    //Bubble sort
    int arr[10] = {34,654,234,235,65,34,23,65,76,10};




}