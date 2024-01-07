#include<iostream>
using namespace std;

class Stack{

    public:
        int *arr; // pointer to our stack array(dynamic)
        int top; // pointer to the topmost element of stack(-1 if empty)
        int size; // size of the stack to be made

        Stack(int size){
            arr = new int[size];
            this->size = size;
            top = -1;
        }

        // behaviour

        void push(int num){
            if(top == size -1){
                cout<<"Stack Overflow"<<endl;
            }else{
                top++;
                arr[top] = num;
            }
        }

        void pop(){
            if( top == -1 ){
                cout<<" Stack Underflow "<<endl;
            }else{
                top--;
            }
            return;
        }

        int gettop(){
            if( top == -1 ){
                cout<<" Stack is empty "<<endl;
            }else{
                return arr[top];
            }

        }

        int getsize(){
            return (top+1);
        }

        bool empty(){
            if( top == -1 ){
                return true;
            }else{
                return false;
            }
        }
};

int main(){


    // creating the stack

    Stack stk(4);

    stk.pop();

return 0;
}