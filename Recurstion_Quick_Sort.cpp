#include <iostream>
using namespace std;

void ArrP(int arr[], int s , int e){
    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] ={3,1,5,7,2,1};
    
    ArrP(arr,0,5);

    
}