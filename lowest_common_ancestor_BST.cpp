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
        //Use Temp Node
        TreeNode *curr= root;
        
        while(true)
        {
            if(p->val < curr->val && q->val < curr->val) //If left and right values are lesser than current, lowest ancestor is on the left
                curr = curr->left;
            else if (p->val > curr->val && q->val > curr -> val) //Else its on right
                curr = curr->right;
            else //It is the lowest ancestor
                break;
        }
        return curr;
    }
};