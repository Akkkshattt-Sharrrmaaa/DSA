#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(){
            this->data = 0;
            this->next = NULL;
        }

        node(int data){
            this->data=data;
            this->next=NULL; 
        }
};

void print(node* head){
    if(head==NULL){
        cout<<"liked list is empty"<<endl;
    }else{
        node* ptr= head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }cout<<endl;
    }
}

int getLength(node *head){
    int count = 0 ;
    node *ptr = head;
    while(ptr!=NULL){
        ptr=ptr->next;
        count++;
    }

return count;
}

node *reverse(node* head , int k){
    
    if(head == NULL) return NULL;

    if(k > getLength(head)) return head;

    node * current = head;
    node * fwd = current->next;
    node * prev = NULL;

    int count = 0;

    while(count < k){

        fwd = current->next;
        current->next = prev;
        prev = current;
        current = fwd;
    count++; 
    }

    if(fwd !=NULL){
        head->next = reverse(fwd , k);
    }

return prev;
}

int main(){

    node* first = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* fourth = new node(40);
    node* fifth = new node(50);
    node* sixth = new node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    node* head = first;

print(head);
head = reverse(head, 2);

print(head);

return 0;
}