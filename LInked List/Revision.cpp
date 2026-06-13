#include <iostream>
using namespace std;

class Node(){
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

int getlength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp!= NULL){
        temp = temp-> next;
        length++;
    }
    return length;
}


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

    void InsertAtPosition(Node* &head, Node* &tail,int position, int d){
        Node* temp = head;
        int cnt = 0;
        if(position == 0){
            InsertAtHead(head,d);
            return;
        }

        while( cnt < position-1){
            temp = temp ->next;
            cnt++;
        }

        if(temp->next == NULL){
            InsertAtTail(tail,d);
            return;
        }

        Node *NodetobeInserted = new Node(d);
        NodetobeInserted->next = temp->next;
        temp->next = NodetobeInserted;



    }

    void deleteNode(Node* &head,Node* &tail, int position){

        if(position == 0){
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            
            delete temp;

        }
        else{
            Node* curr = head;
            Node* prev = NULL;
            int cnt = 0;

            while(cnt < position)
            {
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev->next = curr->next;
            curr->next= NULL;
            delete curr;

            if(prev->next == NULL){
                tail = prev;
            }
        }
    }

    void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
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
        InsertAtPosition(head,tail,0,2);
        InsertAtPosition(head,tail,4,17);
        

        print(head);

        cout << "With delete:-" << endl;
        deleteNode(head,tail,2);
        deleteNode(head,tail,3);

        print(head);

        cout << "heads = " << head->data << endl<< "tails = " << tail->data << endl;
        
        
    }

