#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

    node(){
        this->data = -1;
        this->next = NULL;
    }

    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void print(node* head){
    if(head==NULL){
        cout<<"Empty"<<endl;
    }

    node *ptr = head;
    cout<<"Data : ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<<endl;

}

node* reverse(node* &current , node* &prev){

    // base case
    if(current == NULL){
        return prev;
    }

    // computation 
    
    node* fwd = current->next;
    current->next = prev;

    // recursive call 

    return reverse(fwd , current);  
}

int main(){

    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);

    first->next =second;
    second->next =third;
    third->next =fourth;

    node *head = first;
    node *tail = fourth;

cout<<"Original list : "<<endl;
print(head);


    node* current = head;
    node* prev = NULL;

    head = reverse(current , prev);

cout<<"After reversing : "<<endl;
print(head);

return 0;
}