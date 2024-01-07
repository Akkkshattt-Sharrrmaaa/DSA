#include<iostream>
using namespace std;

class node{
    public:
        node *prev;
        int data;
        node *next;

        node(){
            this->prev = NULL;
            this->data = 0;
            this->next = NULL;
        }

        node(int data){
            this->prev = NULL;
            this->data = data;
            this->next = NULL;
        }
};

void print(node* &head){
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
    }else{
        node *ptr = head;
        cout<<"data : ";
        while(ptr!= NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }cout<<endl;
    }
}

int getLength(node* &head){

    if(head == NULL) return 0;

    int len = 0;
    node* ptr = head;
    while(ptr!= NULL){
        len++;
        ptr=ptr->next;
    }

return len; 
}

void insert_at_head(node* &head , node* &tail, int data){

    if(head==NULL){
        node *ptr = new node(data);
        head = ptr;
        tail = ptr;

        return;
    }

    node* ptr = new node(data);
    ptr->next = head;
    head->prev = ptr;
    head = ptr;

}

void insertion_at_tail(node* &head , node* &tail , int data){
    if(head == NULL){
        node* ptr = new node(data);
        head = ptr;
        tail = ptr;

        return;
    }

    node *ptr = new node(data);
    tail->next = ptr;
    ptr->prev = tail;
    tail = ptr;
}


void insertion_at_pos(node* &head , node* &tail, int data , int pos){

    if(head == NULL){
        node *temp = new node(data);
        head = temp;
        tail = temp;
        return;
    }

    if(pos == 1){ 
        insert_at_head(head, tail , data);
        return;
    }

    if(pos == getLength(head)){
        insertion_at_tail(head, tail , data);
        return;
    }

    node *ptr = head;
    for(int i=1 ; i<pos-1 ; i++){
        ptr=ptr->next;
    }

    node *ptr2 = ptr->next;

    node *temp = new node(data);
    temp->next = ptr2;
    temp->prev = ptr;
    ptr->next = temp;
    ptr2->prev = temp;
}

void deletion_at_head(node* &head){
    if(head==NULL){
        cout<<"Deletion not possible as linked list is empty"<<endl;
        return;
    }

    node *ptr = head;
    head = head->next;
    head->prev = NULL;
    ptr->next = NULL;
    delete ptr;
}

void deletion_at_tail(node* &head, node* &tail){

    if(head==NULL){
        cout<<"deletion not possible as linked list is empty"<<endl;
        return;
    }

    node *ptr = tail;
    tail = tail->prev;
    tail->next = NULL;
    ptr->prev = NULL;
    delete ptr;

}

void deletion_at_pos(node* &head, node* &tail , int pos){
    if(head==NULL){
        cout<<"deletion not possible as linked list is empty"<<endl;
        return;
    }
    if(pos == 1){
        deletion_at_head(head);
        return;
    }

    if(pos == getLength(head)){
        deletion_at_tail(head, tail);
        return;
    }

    node* to_delete = head;

    for(int i=1 ; i<pos ; i++){
        to_delete = to_delete->next;
    }

    node *ptr = to_delete->prev;
    node *ptr2 = to_delete->next;

    ptr->next = ptr2;
    ptr2->prev = ptr;
    to_delete->next = NULL;
    to_delete->prev = NULL;
    delete to_delete;

}

int main(){ 

    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);

    node* head = first;
    node* tail = third;

    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;

print(head);

cout<<"Length of linked list is : "<<getLength(first)<<endl; 

insert_at_head(head , tail, 1);
cout<<"--- after insertion at head ---"<<endl;
print(head);


insertion_at_tail(head, tail ,40);
cout<<"--- after insertion at tail ---"<<endl;
print(head);

insertion_at_pos(head, tail , 25 , 4);
cout<<"--- after insertion at pos ---"<<endl;
print(head);

deletion_at_head(head);
cout<<"--- after deletion at head ---"<<endl;
print(head);

deletion_at_tail(head, tail);
cout<<"--- after deletion at tail ---"<<endl;
print(head); 

deletion_at_pos(head, tail , 3);
cout<<"--- after deletion at pos ---"<<endl;
print(head);

return 0;
}












