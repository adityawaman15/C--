#include <iostream>
#include <map>

using namespace std;

class Node(
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
)
;

void detect(Node* head){
    if(head == NULL){
        cout << "NULL" << endl;
        return;
    }
    Node* temp = head;
    map<Node*,bool> visited;
    while(temp!= NULL){
        if(visited[temp] == true){
            cout << "Loop detected" << endl;
            return;
        }
        else{
            visited[temp] = true;
        }
        temp = temp->next;
    }
}
int main(){}