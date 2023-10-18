// queues using array and linked list
class Node{
        public:
        int val;
        Node* next;
        Node(int data){
        this->val=data;
        this->next=NULL;
        } 
 };
 class Queue{
        Node* head;
        Node* tail;
        int size=0;
        public:
        Queue(){
        this->head=NULL;
        this->tail=NULL;
        }
        void enqueue(int data){
        Node* newNode=new Node(data);
        if (this->head==NULL)
        {
        this->head=newNode;
        this->tail=newNode;
        }else{
        this->tail->next=newNode;
        this->tail=newNode;
        }  
        this->size++;
        }
        void dequeue(){
        if (this->head==NULL)
        {
        return;
        }else{
        Node* oldHead=this->head;
        Node* newHead=this->head->next;
        this->head=newHead;
        if (this->head==NULL)
        {
        this->tail=NULL;
        }
        oldHead->next=NULL;
        delete oldHead;
        this->size--;
        } 
        }
        int getSize(){
        return this->size;
        }
        bool isEmpty(){
        return this->head==NULL;
        }
        int front(){
        if (this->head==NULL)
        {
        return -1;
        }return this->head->data;       

        }
 };

 class Queue{       
     int front;       
     int back;       
     vector<int> v;
     public:       
     Queue(){       
         this->front=-1;       
         this->back=-1;       
     }       
         void enqueue(int data){       
             v.push_back(data);       
             this->back++;       
             if (this->back==0)       
             {       
                 this->front++;       
             }       
         }       
         void dequeue(){       
             if (this->front==this->back)       
             {       
                 this->front=-1;       
                 this->back=-1;       
                 this->v.clear();       
             }else{       
                 this->front++;       
             }        
         }       
         int front(){       
             if (this->front==-1)       
             {       
                 return -1;       
             }       
             return v[this->front];       
         }       
         bool isEmpty(){       
             return this->front==-1;       
         }
 };