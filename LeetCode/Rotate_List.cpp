/**
https://leetcode.com/problems/rotate-list/description/


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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next or k==0)
        {
            return head;
        }
        ListNode* cur=head;
        int cnt=1;
        while(cur->next!=NULL)  // finding the length and 
        {                          // go till last node
            cur=cur->next;
            cnt+=1;
        }
        // join the last node to the head of prev.
        cur->next=head;
        k=k%cnt;
        k=cnt-k;
        while(k--)
        {
            cur=cur->next;
        }
        head=cur->next;
        cur->next=NULL;
        
        return head;
    }
};
