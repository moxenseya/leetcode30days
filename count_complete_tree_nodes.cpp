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
    

    
    int countNodes(TreeNode* root) {
        int totalNodes = 0;
        if(!root)
            return 0;
        
        queue<TreeNode*> nodes;
        nodes.push(root);
        while(!nodes.empty())
        {
            
            if(nodes.front()->left)
                nodes.push(nodes.front()->left);
            if(nodes.front()->right)
                nodes.push(nodes.front()->right);
                nodes.pop();
            totalNodes++;
                
        }
        
        
        return totalNodes;
    }
};