#include <iostream>
using namespace std;

int getlength(Node* head){
    int len = 0;
    while(head!= NULL){
        len++;
        head = head->next;
    }
    return len;
}


Node* middle(Node* head){

    int len = getlength(head);
    int ans = len/2;

    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp->next;
        cnt++;
    }
    return temp;


}

Node* middle_optimised(Node *head){
    //Single node or no node;
    if(head == NULL || head -> next == NULL ){
        return head;
    }


    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast!= NULL){
            fast = fast ->next;
        }

        slow = slow -> next;
    }
    return slow;
}

int main(){

}