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

    node(int data , node *next){
        this->data = data;
        this->next = next;
    }

};

void print(node *head){
    if(head == NULL){
        cout<<"empty list"<<endl;
    }else{
        node *ptr = head;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }cout<<endl;
        
    }
}

node * sort_list(node* &head){

    node* zerohead = new node(-1);
    node* zerotail = zerohead;

    node *onehead = new node(-1);
    node *onetail = onehead;

    node *twohead = new node(-1);
    node *twotail = twohead;

    node * ptr = NULL;
    while(head!=NULL){

        ptr = head;
        head = head->next;
        ptr->next = NULL;

        if(ptr->data == 0){

            zerotail->next = ptr;
            zerotail = ptr;

        }else if(ptr->data == 1){

            onetail->next = ptr;
            onetail = ptr;

        }else if(ptr->data == 2){

            twotail->next = ptr;
            twotail = ptr;

        }

    }


    zerotail->next = onehead;
    onetail->next = twohead;

    node *temp = zerohead;

    while(temp!=NULL){

        if(temp->next == onehead){
            temp->next = onehead->next;
            onehead->next = NULL;
            delete onehead;
        }

        if(temp->next == twohead){
            temp->next = twohead->next;
            twohead->next = NULL;
            delete twohead;
        }

        temp = temp->next;
    }

    head = zerohead->next;
    zerohead->next = NULL;
    delete zerohead;

return head;
}


int main(){

    node * first = new node(2);
    node * second = new node(1);
    node * third = new node(1);
    node * fourth = new node(0);
    node * fifth = new node(0);
    node * sixth = new node(2);
    node * seventh = new node(1);

    first->next =second;
    second->next = third;
    third->next =fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next =seventh;

    node * head = first;

cout<<"original list : ";
print(head);

head = sort_list(head);

cout<<"sorted list : ";
print(head);

return 0;
}