#include <iostream>
using namespace std;

int searchPivot(int nums[]){

    int s = 0;
    int e = 6;

    while(s<e){
        int mid = s + (s-e)/2;
        if (nums[mid] >nums[e]) {
            mid = s +1;
        }
        else{mid = e;}
    }

    return s;

    
}

int main(){

    int nums[7] = {4,5,6,7,0,1,2};
    int ans = searchPivot(nums);
    cout << ans << endl;
}
