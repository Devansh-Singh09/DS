class Node{//singly linked list
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinkedList{//Doubly linked list
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertAtStart(int val){
        Node* new_node=new Node(val);
        if (head==NULL)
        {
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        
    }
    void display(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void inserAtTail(int val){
        Node* new_node=new Node(val);
        if (head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }


    void insertAtPosition(int val,int k){
        //assuming k is less than or equal to length of dll
        Node* temp=head;
        int count=1;
        while (count<(k-1))
        {
            temp=temp->next;
            count++;
        }
        //temp will be pointing to the node at (k-1)th position
        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
        return;

    }
    void deleteAtStart(){
        if (head==NULL)
        {
            return;
        }
        Node* temp=head;
        head=head->next;
        if (head==NULL)//if dll has only one node
        {
            tail=NULL;
        }
        else{
            head->prev=NULL;
        }
        free(temp);
        return;
        
    }
    void deleteAtEnd(){
        if (head==NULL)
        {
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if (tail==NULL)
        {
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
        free(temp);
        return;   
    }
    void deleteAtPosition(int k){
        //assuming k is less than or equal to length of dll
        Node* temp=head;
        int counter=1;
        while (counter<k)
        {
            temp=temp->next;
            counter++;
        }
        //mow temp is pointing to node at kth position
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        return;
        
    }
};