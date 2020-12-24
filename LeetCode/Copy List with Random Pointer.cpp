/*


// https://leetcode.com/problems/copy-list-with-random-pointer/


// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        
        //  s1: create a copy and make in between 
        Node* itr=head;
        Node* front=head;
        while(itr!=NULL)
        {
            front=itr->next;
            Node* copy= new Node(itr->val);
            itr->next=copy;
            copy->next=front;
            itr=front;
        }
        
        // s2: Assign the random pointers for copy nodes
        itr=head;
        while(itr!=NULL)
        {
            if(itr->random != NULL)
            {
                itr->next->random = itr->random->next;
            }
            itr=itr->next->next;
        }
        
        //s3: Restore the random list and extract the copy list
        itr = head;
        Node* pseudoHead = new Node(0);
        Node* copy = pseudoHead;
        
        while(itr!=NULL)
        {
            front=itr->next->next;
            
            // extract the copy
            copy->next = itr->next;
            
            //restore the original list
            itr->next=front;
            
            copy=copy->next;
            itr= front;
        }
        
        return pseudoHead->next;      
    }
};
