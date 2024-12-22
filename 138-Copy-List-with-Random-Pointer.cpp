/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         map<Node*,int> h1;
//         map<int,int> h2;
//         map<int,Node*> h_new;

//         Node* newhead = new Node(head->val);
//         Node* newtemp = newhead;

//         Node* temp=head;
//         int index = 0;
//         while(temp != NULL){
//             // Creating Hash Table
//             h1[temp] = index;
//             temp = temp->next;
            

//             // Making LL Copy
//             if(temp != NULL){
//                 Node* newNode = new Node(temp->val);
//                 newtemp->next = newNode;
//                 newtemp = newtemp->next;
//             }
            

//             index++;
//         }

//         temp = head;
//         newtemp = newhead;
//         index = 0;

//         while(temp != NULL){
//             // Hash Table To Link Index to Index Of Random Address
//             if(temp->random != NULL){
//                 h2[index] = h1[temp->random];
//                 temp = temp->next;
//             }
//             else{
//                 h2[index] = -1;
//             }

//             // Creating Hash Table Of New LL
//             if(newtemp != NULL){
//                 h_new[index] = newtemp;
//                 newtemp = newtemp->next;
//             }

//             index++;
//         }

//         newtemp = newhead;
//         index = 0;

//         while(newtemp != NULL){
//             newtemp->random = h_new[h2[index]];
//             newtemp = newtemp->next;

//             index++;
//         }

//         return newhead;
//     }
// };




class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL; 

        map<Node*, int> h1; // Maps original node to its index
        map<int, int> h2;   // Maps index to random pointer index

        Node* temp = head;
        Node* newhead = new Node(head->val);
        Node* newtemp = newhead;

        int index = 0;

        // Step 1: Create a copy of the linked list and populate `h1`
        while (temp != NULL) {
            h1[temp] = index; // Map original node to its index
            
            if (temp->next) {
                newtemp->next = new Node(temp->next->val);
                newtemp = newtemp->next;
            }
            
            temp = temp->next;
            index++;
        }

        // Step 2: Map random pointers using indices in `h2`
        temp = head;
        newtemp = newhead;
        index = 0;

        while (temp != NULL) {
            if (temp->random) {
                h2[index] = h1[temp->random]; // Map index to random pointer index
            } else {
                h2[index] = -1; // Use -1 for NULL
            }

            temp = temp->next;
            newtemp = newtemp->next;
            index++;
        }

        // Step 3: Set random pointers in the new list
        newtemp = newhead;
        index = 0;

        temp = head; // Reset `temp` for second traversal

        while (newtemp != NULL) {
            if (h2[index] != -1) {
                Node* randomNode = newhead;
                int randomIndex = h2[index];
                
                for (int i = 0; i < randomIndex; i++) {
                    randomNode = randomNode->next;
                }

                newtemp->random = randomNode;
            } else {
                newtemp->random = NULL;
            }

            newtemp = newtemp->next;
            index++;
        }

        return newhead;
    }
};
