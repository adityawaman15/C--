#include <iostream>
using namespace std;

int search(int nums[]){

    int s = 0;
    int e = 6;
    int mid;
    
    while(s<e){
        mid = s + (e-s)/2;


        if(nums[mid] > nums[0]){
            s = mid +1;
        }
        else{e = mid;}
    }

    return s;

    
}

int main(){

    int nums[7] = {4,5,6,7,0,1,2};
    int ans = search(nums);
    cout << ans << endl;
}