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
    ListNode* reverseList(ListNode* head) {
        stack<int> values;
        ListNode* newList = new ListNode(0);
        ListNode* listHead = newList;
        
        while(head!=nullptr)
        {
            values.push(head->val);
            head=head->next;
        }
        
        
        while(!values.empty())
        {
            newList->next = new ListNode(values.top());
            newList = newList->next;
            values.pop();
            
        }
        return listHead->next;
    }
};