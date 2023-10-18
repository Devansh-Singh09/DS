//Program for Nth node from the end of a Linked List
Node* KfromEnd(Node* head,int N){
    Node* slow=head;
    Node* fast=head;
    while(N--){
        fast=fast->next;
    }
    if(fast==NULL)return head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    return slow->next;
}
