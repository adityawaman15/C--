//  Time complexity of linear search is O(n), where as time complexity of binary search is O(log n)


#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size -1;

    while (start<= end){

        int mid = (start + end)/2;

        if (arr[mid]== key ){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        
    }
    return -1;
}

int main(){

    int even[8] = {2,4,5,7,9,31,45,76};
    int odd[5] = {5,6,9,14,18};

    int evensearch = BinarySearch(even,8, 31);
    cout << "Index of 31 is :- " << evensearch << endl;

    int oddsearch = BinarySearch(odd,5,18);
    cout << "Index if 18 is :- " << oddsearch << endl;

    int outofarraynum = BinarySearch(even,8,8);
    cout << "Index of 8 is :- "<< outofarraynum << endl;

    /* There is a problem in this formuala, the maximum integer can be 2^31 -1 ; but what if the start and end was 2^31 - 1 , 2^31 - 1, 
    During the process there will be (e+s)/2, that means e+s will be bigger than 2^31 -1 ;
    To escape this shit we write the simple formula as s + (e-s)/2 which is the same thing.*/

    /*
    #include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size -1;

    while (start<= end){

        int mid = start + (end - start/2);

        if (arr[mid]== key ){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }

        
    }
    return -1;
}

int main(){

    int even[8] = {2,4,5,7,9,31,45,76};
    int odd[5] = {5,6,9,14,18};

    int evensearch = BinarySearch(even,8, 31);
    cout << "Index of 31 is :- " << evensearch << endl;

    int oddsearch = BinarySearch(odd,5,18);
    cout << "Index if 18 is :- " << oddsearch << endl;

    int outofarraynum = BinarySearch(even,8,8);
    cout << "Index of 8 is :- "<< outofarraynum << endl;*/






}