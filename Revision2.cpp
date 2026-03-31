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


}
