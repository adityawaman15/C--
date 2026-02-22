#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

    int s = 0;
    int e = arr.size() -1;

    while ( s < e){
        int mid = s + (e-s)/2;

        if ( arr[mid] < arr [mid+1] ){
            s = mid +1;
        }// It's climbing 

        else {
            e = mid; // It is either at peak or It's climbing down 
        }

    }
    return mid;
    }

    int main(){

        int answer = 
    }

// 1 2 4 6 7 9 
// 1 4 7 9 4 6