#include<iostream>
using namespace std;



int ArrSum(int Arr[], int size){

    int sum = 0 ;

    for (int i = 0; i < size ; i++){

        sum = sum + Arr[i];

        
    }

   cout << "Sum | "<< sum << endl;


}

void ArrIn (int Arr[], int size){

    for (int i = 0; i < size ; i++){
        cout << "Enter indice | " << i << " | ";
        cin >> Arr[i];    
    }


}


int main(){
    int Size;
    int Array[100];

    cout << "Enter the number of indices in Array | ";
    cin >> Size;


   ArrIn(Array,Size);
   ArrSum(Array, Size);
    


}