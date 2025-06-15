/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }
        if(root->val == p->val){
            return p;
        }
        if(root->val == q->val){
            return q;
        }
        TreeNode* leftVal = lowestCommonAncestor(root->left,p,q);    
        TreeNode* rightVal = lowestCommonAncestor(root->right,p,q);
        if(leftVal != NULL && rightVal != NULL){
            return root;
        }
        else if(leftVal == NULL &&  rightVal != NULL){
            return rightVal;
        }
        else if(leftVal != NULL &&  rightVal == NULL){
            return leftVal;
        }
        else{
            return NULL;
        }
    }
};