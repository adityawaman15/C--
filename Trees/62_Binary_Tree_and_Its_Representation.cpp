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
            node* root = new node(data);
            
            if(data == -1){
                return NULL;
            }

            cout << "Enter data for inserting in left of " << data << endl;
            root->left = BuildTree(root->left);
            cout << "Enter data for inserting in right of "<< data << endl;
            root->right = BuildTree(root->right);
            return root;
        }


int main(){

    node* Root;
    BuildTree(Root);
    

}