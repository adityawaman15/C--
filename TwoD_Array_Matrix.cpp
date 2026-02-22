#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    int l = 0;
    int r = 0;
    int s = matrix.size()-1;



        for(int j = 0; j<matrix.size()/2; j++){

            for(int k = j; k<matrix.size()-j-1; k++){
                swap(matrix[j][k],matrix[k][s-j]);
                swap(matrix[j][k],matrix[s-j][s-k]);
                swap(matrix[j][k],matrix[s-k][j]);
                        }
        }     




}   