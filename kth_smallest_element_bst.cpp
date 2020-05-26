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
    void inorder(TreeNode* root, vector<int> &values)
    {
    if(root==nullptr)
        return;
        inorder(root->left,values);
        values.push_back(root->val);
        inorder(root->right,values);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        inorder(root,values);
        
        return values[k-1];
    }
};