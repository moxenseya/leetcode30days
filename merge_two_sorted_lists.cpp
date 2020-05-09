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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *merged_list = new ListNode(0);
        vector<int> values;
        while(l1!=NULL)
        {
            values.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            values.push_back(l2->val);
            l2=l2->next;
        }
        
        std::sort(values.begin(),values.end());

        ListNode * temp = merged_list;

        for(int x : values)
        {
            
            temp->next = new ListNode(x);
            temp = temp->next;
        }
        return merged_list->next;
    }
};