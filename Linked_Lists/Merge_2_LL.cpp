Node *nn=new Node(NULL);
    Node *nnn=nn;
    Node *p1=head1;
    Node *p2=head2;
    while(p1 && p2){
        if (p1->data<=p2->data){
            nn->next=p1;
            p1=p1->next;
            nn=nn->next;
        }
        else{
            nn->next=p2;
            p2=p2->next;
            nn=nn->next;
            
        }
    }
    while(p1){
        nn->next=p1;
        p1=p1->next;
        nn=nn->next;
    }
    while(p2){
        nn->next=p2;
        p2=p2->next;
        nn=nn->next;
    }
    
    nnn=nnn->next;
    
    return nnn;
