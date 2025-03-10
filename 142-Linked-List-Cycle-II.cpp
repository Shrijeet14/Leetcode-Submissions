/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Using Mapping Method
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         map<ListNode* , int> mpp;
//         ListNode* temp = head;
//         int index = 0;
//         while(temp != NULL){
//             if(mpp.find(temp) != mpp.end()){
//                 return temp;
//             }
//             mpp[temp] = index;
//             index++;
//             temp = temp->next;
//         }
//         return temp; 
//     }
// };



class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head ;
        ListNode* slow = head ;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
            if(fast == slow){
                break;
            }
        }
        if(fast == NULL){return NULL;}
        slow = head;
        while(fast != slow){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};