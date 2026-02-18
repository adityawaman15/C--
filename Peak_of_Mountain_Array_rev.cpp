#include <iostream>
using namespace std;

int peak(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid;
    int ans;

    while(s<=e){
        mid = s +(e-s)/2;
        if(arr[mid]> arr[mid+1]){
            ans = mid;
            e = mid -1;
        }
        else{
            s= mid + 1;
        }

    }
    return ans;

}
int main(){
    int arr[8] = {2,8,9,13,16,19,21,23};
    int a = peak(arr,8);
    cout << "Index | "<< a << ". Value | "<< arr[a]<< endl;

}