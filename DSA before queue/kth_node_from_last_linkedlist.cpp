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

        node(int data , node* next){
            this->data = data;
            this->next = next;
        }
};

void print(node *head){
    if(head == NULL){
        cout<<"empty list"<<endl;
    }else{
        node *ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }cout<<endl;
    }
}

int getLength(node *head){

    int count = 0;
    node *ptr = head;
    while(ptr!=NULL){
        ptr=ptr->next;
        count++;
    }
return count;
}

void printKthNodeFromLast(node* &head, int k){

    if(k> getLength(head)){
        cout<<"Not possible"<<endl;
        return;
    }

    int pos_from_start = getLength(head) - k + 1;

    int count = pos_from_start;
    node *ptr = head;
    while(count-1 != 0){
        ptr=ptr->next;
        count--;
    }
    cout<<ptr->data<<endl;
}

int main(){

    node *first = new node(10);
    node *second = new node(23);
    node *third = new node(53);
    node *fourth = new node(85);
    node *fifth = new node(94);
    node *sixth = new node(18);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    node * head = first;

print(head);
cout<<"length is : "<<getLength(head)<<endl;

int k;
cout<<"enter the value of k :";
cin>>k;

cout<<"value of k taken"<<endl;

printKthNodeFromLast(head, k);

return 0;
}