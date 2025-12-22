#include <iostream>
using namespace std;

int Bubble_Sort(int arr[],int size){
    for (int i = 0; i < size ; i++){

        for (int j = i; j < size -i; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    
    }
    return arr[7];
}

int main(){

    int arr[10] = {6,7,4,3,5,2,1,8,9,10};
    int ans = Bubble_Sort(arr,10);
    cout << ans << endl;}
