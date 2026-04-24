#include <iostream>
using namespace std;

void ArrP(int arr[], int s , int e){
    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Partition(int arr[], int s, int e){
    
    int cnt = 0;
    int p = s;

    //Lower than arr[s]
    for (int i = s; i <= e; i++){
        if ( arr[i] < arr[p]){
            cnt++;
        }

    }
    p = s + cnt;
    swap(arr[p], arr[s]);
    //swapping pivot to it's place!
    ArrP(arr,s,e);

    int i = s;
    int j = e;

    while( i < p && j > p){
        // Finding a number that is greater than pivot and placed before pivot
        while( arr[i] < arr[p]){
            i++;
        }

        // Finding a number that is lesser than pivot and placed after pivot
        while(arr[j] > arr[p]){
            j--;
        }

        //Replacing the found out element
        if(arr[i]> arr[j]){
            swap (arr[i++], arr[j--]);
        }
        ArrP(arr,s,e);
    }
    ArrP(arr,s,e);

    return p;


}
void QuickSort(int arr[], int s, int e){
    ArrP(arr,s,e);

    if (s >=e){
        return;
    }

    int p = Partition(arr, s, e);

    //Sorting left side
    QuickSort(arr, s, p-1);

    //Sorting Right Side
    QuickSort(arr, p+1, e);



}

int main(){
    int arr[6] ={3,1,5,7,2,1};
    QuickSort(arr,0,5);
    
    ArrP(arr,0,5);
}