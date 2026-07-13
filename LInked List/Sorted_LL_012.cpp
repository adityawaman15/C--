/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {

  public:
    Node* segregate(Node* head) {
        Node* temp = head;
        int cnt[3] = {0};
        
        while(temp!= NULL){
            cnt[temp->data]++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 0; i< 3; i++){
            while(cnt[i]){
                temp->data = i;
                temp = temp->next;
                cnt[i]--;
            }
        }
        return head;
        
    }
};
