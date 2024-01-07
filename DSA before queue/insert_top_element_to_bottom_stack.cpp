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

int main(){

    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    if(stk.empty()){
        cout<<"cannot place top element "<<endl;
        return 0;
    }

    int target = stk.top();
    stk.pop();

    moveAtBottom(stk, target);

    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }

return 0;
}