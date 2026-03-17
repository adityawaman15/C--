#include <iostream>
using namespace std;

bool Search(int arr[], int s,int e, int k){
    if(s>e){
        return false;
    }

    int mid = s = (e-s)/2;
    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){
        return Search(arr,mid+1,e,k);
    }
    else{
        return Search(arr,s,mid -1,k);
    }
}

int main(){
    int arr[11] = {2,4,6,20,24,28,38,49,55,222,231};
    int size = 11;
    int key = 28;

    if(Search(arr,0,size-1,key)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}