#include <iostream>
#include <vector>

using namespace std;



void zero(int r, int c, vector<vector<int>>& matrix){
    int cols = 4;
    int rows = 4;

    for(int i = 0; i< cols; i++){
        matrix[i][r-1] = 0;
    }
    for(int i = 0; i <rows;i++){
        matrix[c-1][i] = 0;
    }


}
int main(){
int num = 1;
vector<vector<int>> matrix(4,vector<int>(4,4));

for(int i = 0; i<matrix.size(); i++){
    for(int j = 0; j < matrix[0].size();j++){
        matrix[i][j] = num++;

    }
}

zero(2,3,matrix);

for(int i = 0; i < 16; i++){

    cout << matrix[i/4][i%4] << " ";
    if( (i+1)%4 == 0){
        cout << endl;
    }

}}
