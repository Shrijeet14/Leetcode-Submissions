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

//  Method - 1
// class Solution {
// public:
//     int lengthLL(ListNode* &head){
//         ListNode* temp = head;
//         int len = 0;
//         while(temp != NULL){
//             len++;
//             temp = temp->next;
//         }
//         return len;
//     }
//     ListNode* middleNode(ListNode* head) {
//         int len = lengthLL(head);
//         if(len%2 == 0){
//             len  = len/2;
//             ListNode* curr = head;
//             while(len != 1){
//                 len--;
//                 curr = curr->next;
//             }
//             curr = curr->next;
//             return curr;
//         }
//         else{
//             len++;
//             len  = len/2;
//             ListNode* curr = head;
//             while(len != 1){
//                 len--;
//                 curr = curr->next;
//             }
//             return curr;
//         }
        
//     }
// };




//Method-2 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }
};