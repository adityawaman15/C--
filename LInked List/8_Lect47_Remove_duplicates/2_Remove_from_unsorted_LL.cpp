#include<iostream>
#include <map>
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
;

    void Del_Unsorted(Node* head){
        Node* temp= head;
        int arr[100];
        map<int,bool> visited;
        Node* NodeToBeDeleted;
        while(temp!= NULL){
            if(visited[arr[temp->data]]){
                NodeToBeDeleted= temp->next;
                if(temp->next != NULL){
                    temp->next = temp->next->next;
                    if(NodeToBeDeleted!= NULL){
                        delete NodeToBeDeleted;
                    }
                }

                
            }
            else{
                visited[arr[temp->data]] = true;
                temp = temp->next;
            }
        }
    }