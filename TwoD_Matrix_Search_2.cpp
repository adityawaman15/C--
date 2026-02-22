#include <iostream>
#include <vector>

using namespace std;

int main(){
        int rows = matrix.size();
        int cols = matrix[0].size();

        <vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
        int target = 5;

        int row_index = 0;
        int col_index = cols-1;

        while(row_index < rows && col_index >= 0){

            int element = matrix[row_index][col_index];

            if(element == target){
                return true;
            }
            else if(element > target){
                col_index--;
    
            }
            else {
                row_index++;
            }


        }
        return false;
    }



