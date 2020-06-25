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
    int rangeSumBST(TreeNode* root, int L, int R) {
        vector<int> values;
        
        queue<TreeNode*> nodes;
        nodes.push(root);
        
        while(!nodes.empty())
            {
            values.push_back(nodes.front()->val);
            if(nodes.front()->left)
                nodes.push(nodes.front()->left);
            if(nodes.front()->right)
                nodes.push(nodes.front()->right);
            nodes.pop();
        }
        sort(values.begin(),values.end());
        int a,b;
        for(int i =0;i<values.size();i++)
        {
         if(values[i]==L)
             a = i;
        else if(values[i]==R)
             b=i;
        }
        
        int res =  0;
        for(int j = a;j<=b;j++)
        {
            res+=values[j];
        }
        
        return res;
    }
};