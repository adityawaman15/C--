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

void InsertAtHead(Node* &head,Node* &tail, int d){
    // new node created
    Node* temp = new Node(d);
    tail = temp->next;
    temp -> next = head;
    
    head = temp;

}

void InsertAtTail(){}

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
    InsertAtHead(head,tail,12);
    InsertAtHead(head,tail,18);


    print(head);
     cout << tail->data << endl;

}