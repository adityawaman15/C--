#include <iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

     Node(int d){
        this->data = d;
        this->next = NULL;
     }
};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void print(Node* head){
 Node* temp = head;
 while(temp->level != NULL){
    cout << temp->data << endl;
    temp = temp -> next;
 }
}
int main(){

    Node* Node1 = new Node(10);

    Node* head = Node1;
    Node* tail = Node1;
    InsertAtHead(head,5);
    InsertAtTail(tail,15);

    print(head);
    
}

