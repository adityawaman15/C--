#include <iostream>
using namespace std;

bool search(int arr[], int size, int target){
    if(size == 0){
        return 0;}
    if(arr[0] == target){
        return 1;
    }

        return search(arr + 1, size -1,target);

}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    bool ans = search(arr,7,9);
    if(ans){
        cout << "Target found";
    }
else {
    cout << "Target not found";
}
}