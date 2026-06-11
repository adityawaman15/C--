#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free of node with data"<< value << endl;
    }
}
;

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout << endl;
}

int main(){
    Node* Node1 = new Node(10);
    Node* head = Node1;
    Node* tail = Node1;

    print(head);

}