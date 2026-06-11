#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }

    ~Node(){
        next = NULL;
        if(this->next!= NULL){
            delete next;
            this->next;
        }
    }
};

InsertAtHead(int d, Node* &head){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}

InsertAtTail(int d, Node* &tail){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

InsertAtIndex(int d, int index,  Node* &head, Node* &tail){
    Node* temp = head;
    int cnt = 0;

    if(index == 0){
        InsertAtHead(d, head);
        return;
    }
    
    while(cnt < index -1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(d,tail);
        return;
    }

    Node* NodeToBeInserted = new Node(d);
    NodeToBeInserted-> next = temp-> next;
    temp->next = NodeToBeInserted;
    
    
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }


}

int main(){

    Node* Node1 = new Node(10);
    Node* head = Node1;
    Node* tail = Node1;

}