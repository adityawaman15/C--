#include <iostream>
using namespace std;

class Node{
    private:
        int data;
        Node* next;
        Node* head;
        Node* tail;
        int capacity = 100;
        int size = 0;

    
    public:
    
        Node(int d){
            this->data =d;
            this->next = NULL;
            this->head = NULL;
            this->tail = NULL;
        }

        void enqueue(int d){
            Node* temp = new Node(d);
            if(head == NULL){
                
                head = temp;
                tail = temp;
            }
            else{
                tail->next = temp;
                temp = tail;
            }

            size++;
        }


        void dequeue(){
            if(head == NULL){
                cout << "queue is empty!" << endl;
            }
            else{
                

            }

        };
        void isEmpty();
        void front();


    


}