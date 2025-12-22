#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n , int target){

    int s = 0;
    int e = n -1;

    
    int ans = -1;

    while (s <=e){
        int mid = s + (e-s)/2;

        if (arr[mid] == target){

            ans = mid;
            e = mid - 1;
        }

        if (arr[mid] > target){
            e = mid -1;
            
        }

        if (arr[mid] < target){
            s = mid +1;

        }
    }

    return ans;



}

int LastOcc(int arr[], int n,int target){

    int s = 0;
    int e = n -1;

    
    int ans = -1;

    while (s <=e){
        int mid = s + (e-s)/2;

        if (arr[mid] == target){

            ans = mid;
            s = mid + 1;
        }

        if (arr[mid] > target){
            e = mid -1;
            
        }

        if (arr[mid] < target){
            s = mid +1;
            
        }
    }
    return ans;

}

int main(){

    int Array[8] = {2,4,7,9,11,11,11,12};

    int first = FirstOcc(Array,8,11);
    int last = LastOcc(Array,8,11);
    
    cout << first << " " << last << endl;
}