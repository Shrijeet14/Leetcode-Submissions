/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Method-1 : Hashing Method
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
//         map<ListNode* , int> mpp;
//         ListNode* ans= NULL;
//         while(headA != NULL){
//             mpp[headA]++;
//             headA = headA->next;
//         }
//         while(headB != NULL){
//             mpp[headB]++;
//             if(mpp[headB]==2){
//                 ans = headB;
//                 return headB;
//             }
//             headB = headB->next;
//         }
//         return ans;
//     }
// };


//Method 2 : Pointer switching Method
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA != tempB){
            if(tempA == NULL){
                tempA = headB;
            }
            else{
                tempA = tempA->next;
            }
            if(tempB == NULL){
                tempB = headA;
            }
            else{
                tempB = tempB->next;
            }
        }
        return tempA;
    }
};