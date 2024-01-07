#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;
    
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

node * reverseList(node * head){

    node* prev = NULL;
    node* current = head;
    node* fwd = head->next;

    while(current != NULL){
        fwd = current->next;
        current->next = prev;
        prev = current;
        current = fwd;
    }

return prev;
}

bool isPalindrome(node* head){

    if(head==NULL){
        cout<<"Linked list is empty"<<endl;
        return false;
    }

    if(head->next == NULL){
        return true;
    }

    node * fast = head;
    node * slow = head;

    while(fast !=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    // now out slow pointer is at the mid , and slow->next is start of the other half
    // reverse the list from here

    node * reversehead = reverseList(slow->next);

    slow ->next = reversehead;

    node *temp1 = head;
    node *temp2 = reversehead;

    while(temp2!=NULL){
        if(temp1->data != temp2->data){
            return false;
        }else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

return true;
}

int main(){

    node* first = new node(1);
    node* second = new node(2);

    first->next = second; 


    node* head = first;

bool isPal = isPalindrome(head);
cout<<isPal<<endl;

return 0;
}