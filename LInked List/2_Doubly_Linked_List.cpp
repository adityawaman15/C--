    #include <iostream>
    using namespace std;

    class Node{
        public:
        int data;
        Node* next;
        Node* prev;

        Node(int d){
            data = d;
            this->next = NULL;
            this->prev = NULL;
        }

        ~Node(){
            int value = this->data;
            if(next != NULL){
                delete next;
                next = NULL;
            }
            cout << "memory free of node with data" << value <<  endl;
        }
        
    }
    ;
    void print(Node* &head){
        Node* temp = head;

        while( temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
            
        }
        cout << endl;
    }
    void insertAtHead(Node* &head, int d){

        if(head == NULL){
            Node* temp = new Node(d);
            head = temp;

        }
        else{
        Node* temp = new Node(d);
        temp ->next = head;
        head-> prev = temp;
        head = temp;}


    }

    void InsertAtTail(Node* &tail, int d){

        if(tail == NULL){
            Node *temp = new Node(d);
            tail = temp;
        }
        else{
        Node* temp = new Node(d);
        temp-> prev = tail;
        tail->next = temp;
        tail = temp;
        }
    }

    void InsertNode(Node* &head, Node* &tail, int position, int d){

        Node* temp = head;
        Node* temp1;

        if(position == 0){
            insertAtHead(head,d);
            return;
        }
        
        int cnt = 0;
        while(cnt < position-1){
    
            temp = temp -> next;
            cnt++;
        }

        if(temp->next == NULL){
            InsertAtTail(tail,d);
            return;

        }
        temp1= temp->next;

        Node* NodetobeInserted = new Node(d);
        NodetobeInserted->next = temp ->next;
        temp-> next = NodetobeInserted;
        NodetobeInserted-> prev = temp;
        temp1->prev = NodetobeInserted;


    }

    void DeleteNode(int position, Node* &head, Node* &tail){

    // deleting first node
    if(position == 0){

        Node* temp = head;

        head = temp->next;

        if(head != NULL){
            head->prev = NULL;
        }

        // single node case
        if(temp == tail){
            tail = NULL;
        }

        temp->next = NULL;
        temp->prev = NULL;

        delete temp;
    }

    else{

        Node* curr = head;
        Node* prevNode = NULL;

        int cnt = 0;

        while(cnt < position){

            prevNode = curr;
            curr = curr->next;
            cnt++;
        }

        prevNode->next = curr->next;

        // if not last node
        if(curr->next != NULL){
            curr->next->prev = prevNode;
        }

        // if deleting tail
        if(curr == tail){
            tail = prevNode;
        }

        curr->next = NULL;
        curr->prev = NULL;

        delete curr;
    }
}

    int main(){
        Node* node1 = new Node(10);
        Node* head = node1;
        Node* tail = node1; 

        print(head);

        insertAtHead(head,11);
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        insertAtHead(head,13);
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        insertAtHead(head,18);
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        InsertNode(head,tail,1,12);
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        DeleteNode(3,head,tail);
        print(head);
        cout << "head " << head->data << endl;
        cout << "tail " << tail->data << endl;
    }