    /*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
   
    void InsertAtTail(Node* &tail,Node* &head, int d){
        Node* temp = new Node(d);
        if(tail == NULL){
            tail = temp;
            head = temp;
            return;
        }

        tail->next = temp;
        tail = temp;
    }
    Node* copyRandomList(Node* head) {
        Node* Copy = NULL;
        Node* tail = Copy;

        Node* temp = head;

        map<Node*,Node*> mark_nodes;
        map<Node*,Node*> mark_pointers;

        while(temp!= NULL){
            InsertAtTail(tail,Copy,temp->val);
            temp = temp->next;

        }
        

        Node* temp1 = head;
        Node* temp2 = Copy;
        
        while(temp1!= NULL){
        mark_nodes[temp1] = temp2;
        mark_pointers[temp1] = temp1->random;
        
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
        }
        temp1 = head;
        temp2 = Copy;


        while(temp1!= NULL){
            temp2->random = mark_nodes[mark_pointers[temp1]];
            temp1= temp1->next;
            temp2= temp2->next;
        }

        return Copy;


        
    }
};