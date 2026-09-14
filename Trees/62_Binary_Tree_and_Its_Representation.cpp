#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        
        node(int d){
            this-> data = d;
            this-> left = NULL;
            this-> right = NULL;
        }
}
;
node* BuildTree(node* root){

            int data;
            cout << "Enter the data:- ";
            cin >> data;
            root = new node(data);
            
            if(data == -1){
                return NULL;
            }

            cout << "Enter data for inserting in left of " << data << endl;
            root->left = BuildTree(root->left);
            cout << "Enter data for inserting in right of "<< data << endl;
            root->right = BuildTree(root->right);
            return root;
        }

void LevelOrderTraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        cout << temp->data << " ";
        q.pop();


        if(temp == NULL){ //purana level pura traverse ho chuka he
            cout << endl;
            if(!q.empty()){ //queue still has some child nodes
                q.push(NULL);

            }
        }
        else{
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }
    }
}


int main(){

    node* Root = NULL;
    Root = BuildTree(Root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1


    cout << "Tree is | ";
    LevelOrderTraversal(Root);
    

}