#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

    if (arr.size() < 3){
        return false;
    }

    int i = 0;
    int e = arr.size() -1;

    int ans1,ans2;

    while ( i< e && arr[i] < arr[i+1]){
            i++;
    }
    ans1 = i;

    if(i == arr.size() - 1){return false;}
   while (e > 0 && arr[e] < arr[e-1]) {
    e--;
} 
    ans2 = e;
    if(ans2 == arr.size()-1 || ans1 ==0){
        return false;
    }
    if (ans1 == ans2){
        return true;
    }
    else{
        return false;
    }
}};


        
    
