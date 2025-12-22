#include <iostream>
using namespace std;

int getMax(int Arr[], int Size){

    int max = Arr[0];

    for (int i = 1; i < Size; i++){

        if ( max < Arr[i]){
            max = Arr[i];
        }
    }

    return max;
}

int main(){

    int size;
    cout << "Enter the size of array | ";
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++){
        cout << "Index | " << i << " : ";

        cin >> num[i];
    }

    int max = getMax(num, size);

    cout <<"The Largest Number from this is | "<< max ;

}