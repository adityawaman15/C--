#include <iostream>
#include <vector>

using namespace std;

int main(){

int a = 1;
int i = 1;
 i = i++;
vector<vector<int>> matrix(3,vector<int>(3,i++));

for(int i = 0; i < matrix.size()* matrix[0].size(); i++){

    cout << matrix[i/3][i%3] << " ";
}


}
