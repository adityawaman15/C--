#include <iostream>
using namespace std;

void Bubble_Sort( int arr[]){
    int size = sizeof(arr)/4;
    for(int i = 0; i <size-1; i++){
        bool swap = false;
        for(int j = 0; i <size -j-1; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }


}

void print(int arr[]){
    int size = sizeof(arr)/4;
    for(int i = 0; i <size ; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    //Bubble sort
    int arr[10] = {34,654,234,235,65,34,23,65,76,10};
    char flag;
    int num;


    do {
        cout << "Enter :-" << endl; 
        cout << "1 | To print the array " << endl;
        cout << "2 | To sort the array " << endl;
        cin >> num;

        switch(num){
            case (1):
             print();
            case (2):
             Bubble_Sort();
            default:
             break;
        }

        cout << "Do you want to continue \"Y or N\" << endl;
        
    }
    while(flag!= "Y");




}