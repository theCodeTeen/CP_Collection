Node * removeDuplicates( Node *head) 
{
      unordered_set<int> hash;
      Node *temp,*rec;
      temp=head->next;
      rec=head;
      hash.insert(head->data);
      while(temp!=NULL){
          if(hash.find(temp->data)!=hash.end())
          {
              rec->next=temp->next;
          }
          else
          {
              hash.insert(temp->data);
              rec=rec->next;
          }
          
          temp=temp->next;
      }
      
      return head;
}