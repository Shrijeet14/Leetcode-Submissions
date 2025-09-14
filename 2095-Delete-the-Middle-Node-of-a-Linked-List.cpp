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
    ListNode* middleElement(ListNode* &head){
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode* deleteElement(ListNode* &head , ListNode*  &mid){
        if(head == mid){
            head = NULL;
            mid = NULL;
            return head;
        }
        if(mid->next == NULL){
            head->next = NULL;
            return head;
        }


        ListNode* temp = head;
        while(temp->next != mid){
            temp = temp->next;
        }
        temp->next = mid->next;
        mid->next = NULL;
        return head;
    }

    ListNode* deleteMiddle(ListNode* head){
        ListNode* mid = middleElement(head);
        head = deleteElement(head , mid);
        return head;
    }
};