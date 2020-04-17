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
    ListNode* middleNode(ListNode* head) {

        //Slow goes at 1x
        ListNode* slow = head;
        //Fast goes at 2x
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = (fast->next)->next;          
        }
        //When fast is at end, slow will be at MID
        
        return slow;
        
        
    }
};