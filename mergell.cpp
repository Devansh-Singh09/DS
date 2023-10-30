#include <iostream >
using namespace std;

class node{
	public:
	int data;
	node* next;
	node(int data){
		this -> data = data;
		this -> next = NULL;
	}
};

node* mergell(node* a,node* b){
    if(a==NULL)return b;
    if(b==NULL)return a;
    if(a->data<=b->data){
        a->next=mergell(a->next,b);
        return a;
    }
    else{
        b->next=mergell(a,b->next);
        return b;
    }
}
void displayList(node* head) {
    node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
  cout << "NULL" << std::endl;
}

int main() {
    
    node* list1 = new node(1);
    list1->next = new node(3);
    list1->next->next = new node(5);

    node* list2 = new node(2);
    list2->next = new node(4);
    list2->next->next = new node(6);

   cout << "List 1: ";
    displayList(list1);

   cout << "List 2: ";
    displayList(list2);

   
    node* mergedList = mergell(list1, list2);

   cout << "Merged List: ";
    displayList(mergedList);

    return 0;
}
