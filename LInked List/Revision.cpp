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

void reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nxt = curr->next;

    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        curr = nxt;
        if(curr!= NULL){
        nxt = curr->next;}
    }

    head = prev;


}
int main(){

}