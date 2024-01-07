#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        //constructors 

        node(){
            this->data = 0;
            this->next = NULL;
        }

        node(int data){
            this->data = data;
            this->next= NULL;
        }

};

void print(node* &head){
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
    }else{
        node *ptr = head;
        cout<<"Data : ";
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }cout<<endl;

    }
}

void insert_at_head(node* &head, node* &tail, int data){

    node *temp = new node(data);

    if(head==NULL){

        head = temp;
        tail = temp;

    }else{

        temp->next = head;
        head = temp;
    }

}

void insert_at_tail(node* &head , node* &tail, int data){

    node *temp = new node(data);
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        tail = temp;        
    }else{
        tail->next = temp;
        tail = temp; 
    }

} 

void insert_at_pos(node* &head, node* &tail, int data , int pos){

    node *temp = new node(data);

    if(head==NULL){
        head = temp;
        tail = temp; 
    }else{
        if(pos == 0){

            insert_at_head(head, tail , data);
            return ;  

        }
        // reach at node after which you have to add
        node *ptr = head;
        for(int i=0; i<pos-1; i++){
            ptr = ptr->next;
        }

        temp->next = ptr->next;
        ptr->next = temp;
    }

}

void deletion_at_head(node* &head){
    if(head==NULL) return;

    node *ptr = head;
    head = head->next;
    delete ptr;
}

void deletion_at_tail(node* &head, node* &tail){

    if(head==NULL) return;

    node *ptr = head;
    while(ptr->next->next != NULL){
        ptr=ptr->next;
    }

    tail = ptr;
    ptr = ptr->next;
    tail->next = NULL;
    delete ptr;

}

void deletion_at_pos(node* &head, node* &tail , int pos){

    if(pos == 0){
        deletion_at_head(head);
    }
    
    node *ptr = head;
    for(int i=0 ; i<pos-1 ;i++){
        ptr=ptr->next;
    }

    node *to_delete = ptr->next;
    ptr->next = to_delete->next;
    to_delete->next = NULL;
    delete to_delete;

}

int main(){


    node *head = NULL;
    node *tail = NULL;

    insert_at_head(head, tail, 30);
    insert_at_head(head, tail, 20);
    insert_at_head(head, tail, 10);


cout<<"------ Doing insertion at head ------ "<<endl;
print(head);

    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);

cout<<"------ Doing insertion at tail -------"<<endl;
print(head);

    insert_at_pos(head, tail , 35 , 3) ;
    insert_at_pos(head, tail, 1 , 0);

cout<<"------ Doing insertion at pos ------"<<endl;
print(head);

    deletion_at_head(head);

cout<<"------ Doing deletion at head -----"<<endl;
print(head);

    deletion_at_tail(head , tail);

cout<<"----- Doing deletion at tail ------"<<endl;
print(head);


    deletion_at_pos(head, tail, 3);

cout<<"----- Doing deletion at pos ------"<<endl;
print(head);

return 0;
}