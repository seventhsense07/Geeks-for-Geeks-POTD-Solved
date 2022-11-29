class Solution{ 
public:
    void reorderList(Node* head) {
        // Your code here
        Node *temp, *head2, *trav, *p  , *q;
    int cnt=1;
    temp=head;
    trav=head;
    head2=head->next;
    while(trav->next){
        trav=trav->next;
        cnt++;
    }
    if(cnt < 3) return ;
    cnt /=2;
    while(cnt--){
       temp=temp->next;
       head2=head2->next;
    }
    temp->next=NULL;
    temp = head2;trav=head2->next;p=head2;q=NULL;
        while(p->next){
            head2 = head2->next;
            p = p->next;
        }
        while(temp!=head2){
            temp->next=NULL;
            p->next=temp;
            temp->next=q;
            q=p->next;
            temp=trav;
            trav=trav->next;
        }
        temp=head;trav=head->next;p=head2;
        while(head2){
            head2=head2->next;
            temp->next=p;
            p->next=trav;
            temp=trav;
            trav=trav->next;
            p=head2;
        }
    }
};
