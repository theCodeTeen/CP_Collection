struct Node* reverseList(struct Node *head)
{
        struct Node *a,*b,*c;
        a=NULL;
        b=head;
        c=head;
        while(b!=NULL){
            
            c=b->next;
            b->next=a;
            
            a=b;
            b=c;

        }
        head=a;
        
        return head;
}