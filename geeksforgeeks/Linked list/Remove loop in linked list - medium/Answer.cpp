void removeLoop(Node* head)
{
        Node *hare,*tortoise,*temp;
       
        hare=head;
        tortoise=head;
        
        tortoise=tortoise->next;
        
        hare=hare->next;
        if(hare!=NULL) hare=hare->next;
        
        while(hare!=tortoise&&hare!=NULL&&tortoise!=NULL){
            // cout<<hare->data<<":"<<tortoise->data<<" ";
            hare=hare->next;
            if(hare!=NULL) hare=hare->next;
            
            tortoise=tortoise->next;
        }
        
        
        if(hare!=NULL)
        {
            tortoise=head;
            while(hare!=tortoise){
                tortoise=tortoise->next;
                hare=hare->next;
            }
            
            while(tortoise->next!=hare) tortoise=tortoise->next;
            
            tortoise->next=NULL;
            
        }
}