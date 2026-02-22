#include <iostream>
#include <vector>

using namespace std;

int main(){

        //Time complexity O(log(row*col))
        vector<vector<int>> matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]];
        int target = 13;w
    

        int rows = matrix.size();
        int cols = matrix[0].size();

        int s = 0;
        int e = rows*cols -1;
        

        while(s<=e){
            int mid = s +(e-s)/2;
            int element = matrix[mid/cols][mid%cols];

            if(element == mid){
                return true;
            }
            if(element < target){
                s= mid +1;
            }
            if(element> target){
                e = mid-1;
            }
        }
        return false
    
    
    }
