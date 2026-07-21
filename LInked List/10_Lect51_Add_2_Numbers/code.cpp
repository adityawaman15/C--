/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

    void InsertAtHead(ListNode* &head, int d) {
        ListNode* temp = new ListNode(d);

        if (head == NULL) {
            head = temp;
            return;
        }

        temp->next = head;
        head = temp;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* newNode = NULL;

        int carry = 0;

        while (temp1 != NULL && temp2 != NULL) {
            int sum = temp1->val + temp2->val + carry;

            carry = sum / 10;
            sum %= 10;

            InsertAtHead(newNode, sum);

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while (temp1 != NULL) {
            int sum = temp1->val + carry;

            carry = sum / 10;
            sum %= 10;

            InsertAtHead(newNode, sum);

            temp1 = temp1->next;
        }

        while (temp2 != NULL) {
            int sum = temp2->val + carry;

            carry = sum / 10;
            sum %= 10;

            InsertAtHead(newNode, sum);

            temp2 = temp2->next;
        }

        if (carry) {
            InsertAtHead(newNode, carry);
        }

        newNode = reverse(newNode);

        return newNode;
    }
};