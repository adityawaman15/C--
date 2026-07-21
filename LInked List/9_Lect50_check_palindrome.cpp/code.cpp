//logic:
/* Copy the Linked list elements into an arary and check if it is palindrome*/

/*Approach 2:-
Get the middle of the linked list and put a pointer there, move the starting pointer and middle pointer one by one if they are same it is a palindrome*/

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
}

void InsertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
    
}

int main(){

}