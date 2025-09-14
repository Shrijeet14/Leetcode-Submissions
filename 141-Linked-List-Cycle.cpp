/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 // Method- 1 => Using Hashing
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         map<ListNode* , bool> mpp ;
//         ListNode* temp = head;
//         while(temp != NULL){
//             if(mpp[temp] == true){
//                 return true;
//             }
//             else{
//                 mpp[temp] = true;
//                 temp = temp->next;
//             }
//         }
//         return false;
//     }
// };

//Method - 2 => Tortoise Algorithm
class Solution {
public:
    bool hasCycle(ListNode *head){
        ListNode* slow = head ;
        ListNode* fast = head ;

        while(fast !=NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
            if(fast == slow && fast ){
                return true;
            }
        }
        return false;
    }
};