#include <iostream>
#include <vector>

using namespace std;

int main(){

int a = 1;
int i = a++;
vector<vector<int>> matrix(3,vector<int>(3,i));

for(int i: matrix){
    cout << i << endl;
}


}
