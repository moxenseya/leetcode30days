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
    int getDecimalValue(ListNode* head) {
        stack<int> digits;
        while(head!=nullptr)
        {
            digits.push(head->val);
            head= head->next;
        }
        int powerVal = 0;
        int integer=0;
        while(!digits.empty())
        {
            int val = digits.top();
            int number = pow(2,powerVal);
            integer+= val * number;
            powerVal++;
            digits.pop();
            
        }
        return integer;
    }
};