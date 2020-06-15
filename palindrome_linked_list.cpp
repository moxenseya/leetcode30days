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
    bool isPalindrome(ListNode* head) {
        vector<int> nodes;
        
        while(head!=nullptr)
        {
            nodes.push_back(head->val);
            head=head->next;
        }
        
        int start = 0;
        int end = nodes.size()-1;
        
        while(start<end)
        {
            if(nodes[start]!=nodes[end])
                return false;
            else 
            {
            start++;
            end--;
            }
        }
        return true;
    }
};