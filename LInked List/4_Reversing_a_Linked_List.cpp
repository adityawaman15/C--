#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
     if(this->next!= NULL){
        delete next;
        next = NULL;
     }
      cout << "The Node of value " << value << "has been deleted";

    }
};

/*
Reverse logic 

*/

void Reverse(Node* &head){
    if(head == NULL || head->next == NULL){ //No Node, Single Node case
        return head;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr != NULL){
            //put forward = curr->next first because if curr->next = NULL, then forward = curr->next will be NULL->next which will crash the code
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
    }
}

void Reverse_withRec(Node* &head, Node* curr, Node* prev){
    if( curr == NULL){
        head = prev;
        return;
    }

    Reverse_withRec(head, curr->next,curr);
    curr->next = prev;
}

//Reucrsion which return Node

Node* Reverse_withRec1(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* chotaHead = Reverse_withRec1(head->next);
    head ->next->next == head;
    head ->next = NULL;

    return chotaHead;
}