#include<iostream>
using namespace std;


class node{
    public:
        int data;
        node *next;
};

void print(node *head){
    if(head==NULL){
        cout<<"Linked list is empty"<<endl;
    }else{
        node *ptr=head; 
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }cout<<endl;
    }
}

int main(){

    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

print(head);

return 0;
}