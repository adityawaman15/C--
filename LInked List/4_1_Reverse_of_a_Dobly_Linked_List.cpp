#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        next = NULL;
        prev = NULL;
        data = d;
    }
}
;

void rev(Node* &head){
    Node* curr = head;
    Node* behind = NULL;

    while(curr != NULL){
        Node* forward = curr->next;

        curr->next = behind;
        curr->prev = forward;

        behind = curr;
        curr = forward;
    }

    head = behind;
}