#include<iostream>
#include<stack>
using namespace std;

void moveAtBottom(stack<int> &stk, int target){

    if(stk.empty()){
        stk.push(target);
        return;
    }

    int topElement = stk.top();
    stk.pop();

    moveAtBottom(stk, target);

    stk.push(topElement);
}

void reverseStack(stack<int> &stk){

    // base case
    if(stk.empty()){
        return;
    }


    int target = stk.top();
    stk.pop();

    reverseStack(stk);

    moveAtBottom(stk , target);

}

int main(){

    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    reverseStack(stk);

    cout<<"stack after reversing : ";

    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }

    cout<<endl;

return  0;
}