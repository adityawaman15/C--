#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
}

class stack{
    Node* top;
    int size;

    public:
     stack(){
        top = NULL;
        count = 0;
     }

     void push(int x){
        Node* temp = new Node();
        temp->next = top;
        top = temp;
        count++;
     }

}

int main()