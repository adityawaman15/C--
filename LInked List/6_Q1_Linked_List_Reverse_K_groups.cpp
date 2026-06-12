#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
}

void rev(Node* head, int k){
    if(curr == NULL){
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = curr->next;
    int cnt = 0;
    while(cnt <k || curr != NULL){
        //rev function:-
        curr->next = prev;
        prev = curr;
        curr = forward;
        if(foward != NULL){
        forward = forward->next;}
        cnt++;
    }
    head = curr;
    if(curr != NULL){
        rev(head,k);
    }
    return;
}
  
