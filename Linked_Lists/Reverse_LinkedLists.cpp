Node *cur=head;
        Node *prev=NULL;
        while(cur){
            Node *nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
            
        }
        return prev;
