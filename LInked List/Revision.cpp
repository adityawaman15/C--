#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void InsertAtHead(Node* &heads, int d){
    Node* temp = new Node(d);
    temp->next = heads;
    heads = temp;
}

void InsertAtTail(Node* &tails, int d){
    Node* temp = new Node(d);
    tails->next = temp;
    tails = temp;
}

void Print(Node* &heads){
    Node* temp = heads;
    while (temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main(){
    Node* Node1 = new Node(15);
    
    Node* heads = Node1;
    Node* tails = Node1;


}