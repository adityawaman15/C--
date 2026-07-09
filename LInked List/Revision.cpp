#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data = d;
        Node* next = NULL;
    }

    ~Node(){
        this>data = NULL;
        if(this->next!= NULL){
            this->next = NULL;
        }
    }
}
;
Node* reverse(Node* head){
    if(head = NULL){
        return head;
    }

    reverse(head->next);
    head->next->next = head;
    head->next = NULL;

}
int main(){

}