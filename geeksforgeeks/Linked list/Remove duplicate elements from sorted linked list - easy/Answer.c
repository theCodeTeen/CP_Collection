void removeDuplicates(struct Node* head)
{
    struct Node *a,*b;
    a=head;
    b=head->next;
    
    while(b!=NULL)
    {
        while(b!=NULL&&a->data==b->data) b=b->next;
        
        
        a->next=b;
        a=b;
        if(b!=NULL)
        b=b->next;
        
    }
    
}