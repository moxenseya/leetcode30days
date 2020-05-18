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
    int minDepth(TreeNode* root) {
        //BFS Solution
        if(root ==nullptr)
            return 0;
        queue<TreeNode*> Q;
        Q.push(root);
        int height =0;
        while(!Q.empty())
        {
            height++;
            int k =Q.size();
            for(int j =0;j<k;j++)
            {
                TreeNode* rt = Q.front();
                if(rt->left) Q.push(rt->left);
                if(rt->right) Q.push(rt->right);
                Q.pop();
                //If we hit a leaf node, with no left and right children
                if(rt->left==nullptr && rt->right==nullptr) return height;
            }
        }
        return -1;
    }
};