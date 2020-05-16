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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd = new ListNode();
        ListNode *even = new ListNode();
        
        ListNode *o = odd;
        ListNode *e = even;
        int count =1;
        
        while(head!=nullptr)
        {
            if(count%2==1)
            {
                o->next = head;
                o=o->next;
            }
            else
            {
                e->next = head;
                e=e->next;
            }
            count++;
            head=head->next;
        }
        e->next = nullptr;
        o->next = even->next;   
        
        return odd->next;
    }
};