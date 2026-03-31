#include <iostream>
#include <vector>

using namespace std;

int main(){
int num = 1;
vector<vector<int>> matrix(4,vector<int>(4,4));

for(int i = 0; i<matrix.size(); i++){
    for(int j = 0; j < matrix[0].size();j++){
        matrix[i][j] = num++;

    }
}

for(int i = 0; i < 16; i++){

    cout << matrix[i/4][i%4] << " ";
    if( (i+1)%4 == 0){
        cout << endl;
    }

}}
