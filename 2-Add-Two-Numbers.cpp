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
    ListNode* insertTail(ListNode* &head , ListNode* &tail , int data){
        ListNode* newNode = new ListNode(data);

        if(head == NULL){
            head = newNode;
            tail = head;
            return head;
        }
        tail->next = newNode;
        tail = newNode;
        return head;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1 ;
        ListNode* ptr2 = l2 ;

        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;

        while(ptr1 != NULL || ptr2 != NULL){
            int data = 0;
            int val1 = (ptr1 != NULL) ? ptr1->val : 0;
            int val2 = (ptr2 != NULL) ? ptr2->val : 0;
            data = carry + val1 + val2;
            head = insertTail(head , tail , data%10);
            carry = data/10;
            
            if(ptr1 != NULL) ptr1 = ptr1->next; 
            if(ptr2 != NULL) ptr2 = ptr2->next; 
        }

        if(carry > 0){
            head = insertTail(head , tail , carry);
        }
        return head;
    }
};