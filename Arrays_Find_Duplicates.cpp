#include <iostream>
using namespace std;

int ArrDup(int Arr[], int size){

    for(int i = 0; i<size ; i++){ 
        
        for (int j =0; j<size; j++){

            if(i == j){
                continue;
            }

            if (Arr[i]==Arr[j]){

              cout << i << " | " ;
              break;

            }
        }
    }
}

int main(){

    int First[5] = {1,2,3,4,3};

    ArrDup(First,5);

      

    
}