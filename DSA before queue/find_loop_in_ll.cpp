#include<iostream>
#include<map>
using namespace std;

class node{
    public:
        int data;
        node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

bool checkCircular(node * head){

    if(head==NULL) return false;

    node* fast = head;
    node* slow = head;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(fast == slow) return true;
    }

return false;
}

int main(){

    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);
    node *sixth = new node(60);

    first->next = second;
    second->next = third;
    third->next =fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = first; /// created the loop


    node *head = first;

    bool isCircular = checkCircular(head);

cout<<"Is circular :"<<isCircular<<endl;

return 0;
}