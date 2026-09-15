/*
Node* LevelOrderTraverse(Node* Root){   
    queue <Node*> q;
    q.push(Root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        cout << temp->data << " ";
        q.pop(); 
        
        if(temp == NULL)){
            cout << "\n";
            if(!q.empty()){
             q.push(NULL);}
        }}

         if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }

}
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ans (5);
    cout << ans[0];
}