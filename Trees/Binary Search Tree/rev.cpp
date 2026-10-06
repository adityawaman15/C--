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

bool search (Node* root, int target){
    if(root == NULL){
        return false;
    }

    
    if(root->data == target){
        return true;
    }
    else if(target> root->data){
        return search(root->right,target);
    }
    else{
        return search(root->left,target);
    }
}


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

    cout << "Enter target to search | ";
    int t;
    cin >> t;
    search(root,t);

   


    



}