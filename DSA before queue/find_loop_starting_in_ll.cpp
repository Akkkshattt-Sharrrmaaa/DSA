#include<iostream>
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


node* findLoopStart(node* head){

    node * fast = head;
    node * slow = head;

    while(fast!=NULL){
        fast = fast ->next;
        if(fast!=NULL){
            fast = fast ->next;
            slow = slow ->next;
        }
        if(fast == slow){
            break;
        }
    }

    slow = head;
    while(fast != slow){
        fast = fast->next;
        slow = slow->next;
    }
return fast;
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
    sixth->next = fourth; 


    node *head = first;


    // now we already know ki loop hai
    // find the starting of loop , don't have to prove presence of loop

    node * loop_start = findLoopStart(head);

cout<<"Loop node : "<<loop_start->data<<endl;

return 0;
}