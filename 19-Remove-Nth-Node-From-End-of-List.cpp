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

    int lengthLL(ListNode* &head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp= temp->next;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* &head, int n) {
        int len = lengthLL(head);
        int pos = len-n+1;
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(pos != 1){
            prev = curr;
            curr = curr->next;
            pos--;
        }

        if(prev != NULL){
            prev->next = curr->next;
            curr->next = NULL;
            return head;
        }
        if(curr == head){
            head = curr->next;
        }
        return head;
    }
};