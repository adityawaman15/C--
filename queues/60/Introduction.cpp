#include <iostream>
#include <queue>
using namespace std;


int main(){
    queue<int> kyu;

    kyu.push(10);
    kyu.push(135);
    kyu.push(14);

    cout << "Size of queue: " << kyu.size() << endl;

    kyu.pop();

    cout << "Size of queue: " << kyu.size() << endl;

    if(kyu.empty()){
        cout << "queue is empty " << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }

}