   
    // https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1#


    Node* merge(Node* a,Node* b)
    {
        Node* temp= new Node(0);
        Node* res=temp;
        while(a!=NULL and b!=NULL)
        {
            if(a->data < b->data)
            {
                temp->bottom=a;
                temp=temp->bottom;
                a=a->bottom;
            }
            else
            {
                temp->bottom=b;
                temp=temp->bottom;
                b=b->bottom;
            }
        }
        if(a) temp->bottom=a;
        else temp->bottom =b;
        
        return res->bottom;
    }
Node *flatten(Node *root)
{
    if(root==NULL or root->next==NULL)
    {
        return root;
    }
    // move to the last linked list  //through recursive calls
    root->next=flatten(root->next);
    
    //now merge
    root=merge(root,root->next);
    
    return root;
    
}

