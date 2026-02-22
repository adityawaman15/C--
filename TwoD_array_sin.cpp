#include <iostream>
using namespace std;

int main(){
    int rows = 4;
    int cols = 3;

    int arr[rows][cols] = {{1,2,3}, {4,5,6}, {7 ,8 ,9}, {10, 11, 12}};

    for(int j = 0; j<cols; j++){

        //Down
        if(j%2 == 0){
            for(int i = 0; i<rows; i++){
                cout << arr[i][j]<< " ";

            }}
        //Up
        else{
            for(int i = rows-1; i>= 0; i--){
                cout << arr[i][j]<< " ";
            }


        }
        cout << endl;
    }
    
}