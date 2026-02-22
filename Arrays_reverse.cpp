#include <iostream>
using namespace std;

void ArrIn (int Arr[], int size){

    for (int i = 0; i < size ; i++){
        cout << "Enter indice | " << i << " | ";
        cin >> Arr[i];    
    }


}

void ArrDisplay(int Arr[], int size){

 for (int i = 0; i < size ; i++){
         cout << Arr[i] << " ";
 
    }
    cout << endl;

} 
void ArrReverse (int Arr[], int size){

    int start = 0;
    int end = size - 1;  // last valid index

    while (end > start) {
        swap(Arr[start], Arr[end]);
        start++;
        end--;
    }

    ArrDisplay(Arr, size);

}



int main(){

    
    int Size;
    int Array[100];

    cout << "Enter the number of indices in Array | ";
    cin >> Size;


   ArrIn(Array,Size);
   ArrDisplay(Array,Size);
   ArrReverse(Array,Size);

    


}
