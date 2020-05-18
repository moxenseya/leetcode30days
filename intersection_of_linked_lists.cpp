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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        
        ListNode* commonPoint = nullptr;
        unordered_map<ListNode*,int> mymap;
        
        while(a!=nullptr)
        {
            mymap.emplace(a,a->val);
            a=a->next;
        }
        while(b!=nullptr)
        {
            if(mymap.count(b)>0)
            {
                commonPoint = b;
                break;
            }
            b=b->next;
        }
        
        
        return commonPoint;
    }
};