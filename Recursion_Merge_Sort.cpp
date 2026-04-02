#include <iostream>
using namespace std;

void merge(int *arr, int s ,int e){

    int mid = s+(e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1];
    int second[len2];

    //copy values
    int k = s;
    for(int i = 0; i<len1;i++){
        first[i] = arr[k++]; 
    }
    
    k = mid +1;
    for(int i = 0; i<len2;i++){
        second[i] = arr[k++];
    }

    //merge 2 arrays;

    int index1 = 0;
    int index2 = 0;

    k = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1<len1){
        arr[k++] = first[index1++];
    }
    while(index2<len2){
        arr[k++] = second[index2++];
    }
    

}

void sort(int *arr,int s, int e){

    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;


    //first part
    sort(arr, s, mid);
    
    sort(arr, mid +1, e);

    merge(arr,s,e);
}

int main(){
    int arr[10] = {3,2,5,61,12,13,133,123,231,1};
    int n = 10;

    sort(arr,0,n-1);

    for(int i:arr){
        cout << i << endl;
    }

}