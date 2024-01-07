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

void sort_list(node* &head){

    int z_count ,  o_count , t_count = 0;
    node *ptr = head;
    while(ptr!=NULL){
        if(ptr->data == 0){
            z_count++;
        }else if(ptr->data == 1){
            o_count++;
        }else{
            t_count++;
        }

        ptr=ptr->next;
    }

    cout<<z_count<<o_count<<t_count<<endl;

    ptr = head;

    while(z_count!=0){
        ptr->data = 0;
        z_count--;
        ptr=ptr->next;
    }

    while (o_count!=0)
    {
        ptr->data = 1;
        o_count--;
        ptr=ptr->next;
    }

    while (t_count!= 0){
        ptr->data = 2;
        t_count--;
        ptr=ptr->next;
    }

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

sort_list(head);

cout<<"sorted list : ";
print(head);

return 0;
}












