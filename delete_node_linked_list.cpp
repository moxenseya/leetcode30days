/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //Remove the next element by copying its value and next pointer to current element.
        node->val = node->next->val;
        node->next = node->next->next;
    }
};