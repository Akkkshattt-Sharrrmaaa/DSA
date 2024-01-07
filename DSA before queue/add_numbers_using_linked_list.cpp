#include<iostream>
using namespace std;

class ListNode{

    public:
        int val;
        ListNode * next;

        ListNode(int data){
            this->val = data;
            this->next = NULL;
        }

};

void print(ListNode* head){
    ListNode *ptr= head;
    while(ptr!=NULL){
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }cout<<endl;
}


ListNode* reverse(ListNode* head){

        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next = current->next;

        while(current!=NULL){
            next = current->next; 
            current->next = prev;
            prev = current;
            current = next;
        }

    return prev;
    }

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        l1 = reverse(l1);
        l2 = reverse(l2);

        int sum = 0;
        int carry = 0;
        int digit = 0;

        ListNode * solhead = NULL;
        ListNode * soltail = NULL;

        while(l1 !=NULL && l2 !=NULL){

            sum = carry + (l1->val) + (l2->val);
            carry = sum % 10;
            digit = sum / 10;

            if(solhead == NULL){
                solhead = new ListNode(digit);
                soltail = solhead;
            }else{
                ListNode * newnode = new ListNode(digit);
                soltail->next = newnode;
                soltail = newnode;
            } 
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1!= NULL){
            sum = carry + l1->val;
            digit = sum / 10;
            carry = sum % 10;

            ListNode * newnode = new ListNode(digit);
            soltail->next = newnode;
            soltail = newnode;
        }

        while(l2!=NULL){
            sum = carry + l2->val;
            digit = sum / 10;
            carry = sum % 10;

            ListNode * newnode = new ListNode(digit);
            soltail->next = newnode;
            soltail = newnode;
        }

        while(carry!=0){

            ListNode * carrynode = new ListNode(carry);
            soltail ->next = carrynode;
            soltail = carrynode;
        } 
    return reverse(solhead); 
    }


int main(){

    ListNode* l1 = new ListNode(2);
    ListNode* second1 = new ListNode(4);
    l1->next = second1;

    ListNode* l2 = new ListNode(2);
    ListNode* second2 = new ListNode(3);
    ListNode* third3 = new ListNode(4);

    l2->next =second2;
    second2->next = third3;


ListNode * sol = addTwoNumbers(l1 , l2);
print(sol);

return 0;
}