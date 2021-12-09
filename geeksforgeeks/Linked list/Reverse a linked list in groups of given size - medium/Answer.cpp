struct node *reverse (struct node *head, int k)
{ 
        
        struct node *nextStart,*a,*b,*c,*prevStart,*curStart,*temp;
        
        nextStart=head;
        
        while(nextStart!=NULL){
            
            curStart=nextStart;
            
            a=NULL;
            b=nextStart;
            c=nextStart;
        
            for(int i=0;i<k;i++)
            if(nextStart!=NULL) nextStart=nextStart->next;
            else break;
            
            while(b!=nextStart){
                c=b->next;
                b->next=a;
                
                a=b;
                b=c;
            }
            
            if(curStart==head) {
                prevStart=head;
                head=a;
            }
            else{
                
                prevStart->next=a;
                prevStart=curStart;
                
            }
           
        }
        return head;
}