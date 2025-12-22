#include <iostream>
using namespace std;

void sort(int arr[], int size){
    for (int i = 1; i < size; i++) {
        int key = arr[i];       // Save the current element
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;       // Insert the key at the correct position
    }
    }

void Arr_cout(int arr[], int size){
   
    for(int i = 0; i<size;i++){
        cout << arr[i] << "\t" ;
    }
}
int main(){
    int arr[7] ={1,3,4,2,5,6,7};
    Arr_cout(arr, 7);
    cout << endl;
    sort(arr,7);
    Arr_cout(arr,7);
}