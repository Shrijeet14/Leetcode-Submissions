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
    pair<ListNode*, ListNode*> reverseLL(ListNode* &head , ListNode* &tail ){
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while (curr != NULL) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        tail = head;
        head = prev;

        return {head, tail};
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head; 

        ListNode* prev = NULL;
        ListNode* ks = head;
        ListNode* kl = head;

        while (kl != NULL) {
            int n = k - 1;
            while (n > 0 && kl != NULL) {
                kl = kl->next;
                n--;
            }
            if (kl == NULL) break;

            ListNode* nex = kl->next;
            kl->next = NULL;

            pair<ListNode*, ListNode*> result = reverseLL(ks, kl);
            ListNode* reversedHead = result.first;
            ListNode* reversedTail = result.second;

            if (prev != NULL) {
                prev->next = reversedHead;
            } else {
                head = reversedHead; 
            }

            reversedTail->next = nex;

            prev = reversedTail;
            ks = nex;
            kl = nex;
        }

        return head;
    }
};
