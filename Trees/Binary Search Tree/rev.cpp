#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;
    
        Node(int d){
            this->left = NULL;
            this->right = NULL;
            this->data = d;    
        }

};


Node* InsertintoBst(Node* root, int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if( d > root->data){
        //right part me insert kardo
        root->right = InsertintoBst(root->right,d);
    }
    else{
        //left part 
        root->left = InsertintoBst(root->left,d);
    }
    return root;
}

void TakeInput(Node* &root){
    int d;
    cout << "Enter value for root of BST | ";
    cin >> d;

    while(d != -1){
        InsertintoBst(root,d);
        cin >> d;
    }
}


int main(){
    

    Node* root = NULL;
    TakeInput(root);

   


    



}