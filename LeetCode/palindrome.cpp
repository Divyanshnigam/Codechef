/**


// https://leetcode.com/problems/palindrome-linked-list/submissions/


 * Definition for singly-linked list.
 * struct ListNode
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* pre=NULL;
        ListNode* next=NULL;
     //   ListNode* n=NULL;
        while(head!=NULL)
        {
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        
        //head=p;
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)
        {
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(slow->val != head->val)
                return false;

            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};
