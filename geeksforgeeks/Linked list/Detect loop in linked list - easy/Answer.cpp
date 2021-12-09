bool detectLoop(Node* head)
{
        Node *hare,*tortoise;
        
        hare=head;
        tortoise=head;
        
        while(hare!=NULL)
        {
            hare=hare->next;
            if(hare!=NULL) hare=hare->next;
            
            tortoise=tortoise->next;
            
            if(hare==tortoise&&hare!=NULL) return true;
        }
        
        return false;
 }