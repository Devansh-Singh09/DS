//merge two linked lists
Node* mergell(Node* a,Node* b){
    if(a==NULL)return b;
    if(b==NULL)return a;
    if(a->val<=b->val){
        a->next=mergell(a->next,b);
        return a;
    }
    else{
        b->next=mergell(a,b->next);
        return b;
    }
}
