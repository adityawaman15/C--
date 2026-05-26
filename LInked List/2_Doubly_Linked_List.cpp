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

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free of node with data" << endl;
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
void insertAtHead(Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;

    }
    else{
    Node* temp = new Node(d);
    temp ->next = head;
    head-> prev = temp;
    head = temp;}


}

void InsertAtTail(Node* &tail, int d){

    if(tail == NULL){
        Node *temp = new Node(d);
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp-> prev = tail;
    tail->next = temp;
    tail = temp;
    }
}

void InsertNode(Node* &head, Node* &tail, int position, int d){

    Node* temp = head;
    Node* temp1;

    if(position == 0){
        insertAtHead(head,d);
        return;
    }
    
    int cnt = 0;
    while(cnt < position-1){
 
        temp = temp -> next;
        cnt++;
    }

    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;

    }
    temp1= temp->next;

    Node* NodetobeInserted = new Node(d);
    NodetobeInserted->next = temp ->next;
    temp-> next = NodetobeInserted;
    NodetobeInserted-> prev = temp;
    temp1->prev = NodetobeInserted;


}

void DeleteNode(int position, Node* &head){
    if(position == 0){
        Node* temp = head;
        temp->next->prev =NULL;
        head = temp->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node;
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 0;
        while(cnt < position){
            prev = curr;
            prev = prev->next;
            cnt++;
        }

        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1; 

    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,18);
    print(head);

    InsertNode(head,tail,1,12);
    print(head);
}