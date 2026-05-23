#include <iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

     //constructor called
     Node(int data){
        this -> data = data;
        this ->next = NULL;
     }
};

void InsertAtHead(Node* &head, int d){
    // new node created
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = tail ->next;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp->data << endl;
        temp = temp -> next;
    }
    cout<< endl;
}



int main(){
    Node* node1 = new Node(5);

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head,12);
    InsertAtHead(head,18);

    cout << tail->data << endl;

    print(head);

}