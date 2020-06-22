/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        queue<TreeNode*> nodes;
        
        nodes.push(root);
        
        TreeNode* value = nullptr;
        
        while(!nodes.empty())
        {
            TreeNode* temp = nodes.front();
            nodes.pop();
            if(temp->val == val)
            {
            value = temp;
            break;
            }
            
            if(temp->left)
                nodes.push(temp->left);
            if(temp->right)
                nodes.push(temp->right);
            
        }
        
        return value;
        
    }
};