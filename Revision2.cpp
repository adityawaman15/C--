
#include <iostream>
using namespace std;


    void zero(int r, int c, vector<vector<int>>& matrix){
    
    for(int i = 0; i< matrix[0].size(); i++){
        matrix[i][r] = 0;
    }
    for(int i = 0; i <matrix.size();i++){
        matrix[c][i] = 0;
    }


}
int main(){

    vector<vector<int>> matrix = {{1,1,1},{1,0,1}{1,1,1}};

        vector<vector<int>> coords;

        for(int i = 0; i < matrix.size();i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    coords.push_back({i,j});
                }
            }
        }

        for(int i = 0; i < coords.size(); i++){
            zero(coords[i][0],coords[i][1],matrix);
        }

    

        
    }
   
