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

    int lengthLL(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k){
        if(head == NULL || head->next == NULL){
            return head;
        }

        int len = lengthLL(head);
        k = k%len;
        if(k < 1){
            return head;
        }
        int pos = len-k;
        ListNode* temp = head;

        while(pos != 1){
            temp = temp->next;
            pos--;
        }

        ListNode* secgroup = temp->next;
        ListNode* newhead = secgroup;
        temp->next = NULL;

        while(k != 1 && k>0){
            secgroup = secgroup->next;
            k--;
        }

        secgroup->next = head;

        return newhead;
    }
};