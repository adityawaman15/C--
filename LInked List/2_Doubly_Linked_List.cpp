#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    
}
;
void print(Node* &head){
    Node* temp = head;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
        
    }
    cout << endl;
}
int insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head-> prev = temp;
    head = temp;

}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,18);
    print(head);
}