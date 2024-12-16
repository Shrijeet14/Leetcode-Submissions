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
    ListNode* reverseLL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        

        while(curr != NULL){
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next != NULL){
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        ListNode* secHalfHead = slow->next;
        slow->next = NULL;
        secHalfHead = reverseLL(secHalfHead);
        ListNode* tempf = head;
        ListNode* temps = secHalfHead;

        while(temps != NULL){
            if(tempf->val != temps->val){
                break;
            }
            tempf = tempf->next;
            temps = temps->next;
        }
        if(temps == NULL){
            return true;
        }
        else {
            return false;
        }
    }
};