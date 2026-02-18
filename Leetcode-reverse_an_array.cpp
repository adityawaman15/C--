#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){

    int s= 0;
    int e = v.size() -1;
    while (s<e){
     int temp = v[s];

        v[s] = v[e];
        v[e] = temp;
        s++;
        e--;
    }

    return v;

}

int main(){
vector<int> a = {1,2,3,4,5};

vector<int> ans = reverse(a);
for (int i: ans){
    cout << i << endl;
}


}


