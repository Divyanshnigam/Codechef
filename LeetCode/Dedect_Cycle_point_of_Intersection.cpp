/**

// https://leetcode.com/problems/linked-list-cycle-ii/submissions/

* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL or head->next== NULL)
        {
            return NULL;
        }
        ListNode* start=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next and fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                while(slow!=start)
                {
                    start=start->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL;
        
    }
};
