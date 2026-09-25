#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* left;
        Node* right;
        int data;
    
    Node(int d){
        this->left = NULL;
        this->right = NULL;
        this->data = d;
    }
};

void LevelOrderTraversal(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        
        q.pop();


        if(temp == NULL){ //purana level pura traverse ho chuka he
            cout << endl;
            if(!q.empty()){ //queue still has some child nodes
                q.push(NULL);

            }
        }
        else{
        cout << temp->data << " ";
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }
    }
}

void InsertIntoBst(Node* &root,int data){
    if(root == NULL){
        root = new Node(data);
    }
    else{
       if(root->data < data){
        InsertIntoBst(root->right, data);
       }
       else{
        InsertIntoBst(root->left, data);
       }
    }
}

void takeInput(Node* &root){
    int data;
    cout << "Enter root | ";
    cin >> data;
    cout << "\n";

    while(data != -1){
        InsertIntoBst(root,data);
        cout << "Enter data | ";
        cin >> data;
        cout << "\n";
    }
}

int main(){

    Node* root = NULL;
    takeInput(root);

    LevelOrderTraversal(root);


}